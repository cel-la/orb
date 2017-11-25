#include "Orb.h"

#if _ORB_OS_LINUX
#include <pthread.h>
#else
#error #error Unsupported operating system!
#endif

using orb::ThreadLocal;

struct ThreadLocal::Data
{
    const ThreadLocal   *tl;
    void                *v;
};

ThreadLocal::ThreadLocal()
    :dtor_(nullptr)
{
#if _ORB_OS_LINUX
    pthread_key_create(&this->key_, default_exit);
#endif
}

ThreadLocal::ThreadLocal(std::function<void(void*)> d)
    :dtor_(d)
{
#if _ORB_OS_LINUX
    pthread_key_create(&this->key_, default_exit);
#endif
}

ThreadLocal::~ThreadLocal()
{
#if _ORB_OS_LINUX
    pthread_key_delete(this->key_);
#endif
}

void* ThreadLocal::get() const
{
    void *v;
    Data *p;

#if _ORB_OS_LINUX
    v = pthread_getspecific(this->key_);
#endif

    p = static_cast<Data*>(v);
    if (p == nullptr)
    {
        p = new Data();
        p->tl = this;
        p->v = nullptr;
#if _ORB_OS_LINUX
        pthread_setspecific(this->key_, p);
#endif
    }

    return p->v;
}

void ThreadLocal::set(void *v)
{
    void *ov;
    Data *p;

#if _ORB_OS_LINUX
    ov = pthread_getspecific(this->key_);
#endif

    p = static_cast<Data*>(ov);
    if (p == nullptr)
    {
        p = new Data();
        p->tl = this;
        p->v = nullptr;
#if _ORB_OS_LINUX
        pthread_setspecific(this->key_, p);
#endif
    }
    else if (p && this->dtor_)
        this->dtor_(p->v);

    p->v = v;
}

void ThreadLocal::default_exit(void *v)
{
    Data *p;

    if (v == nullptr)
        return;

    p = static_cast<Data*>(v);
    if (p->tl->dtor_)
        p->tl->dtor_(p->v);
    delete p;
}
