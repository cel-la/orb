#pragma once

#ifdef __gnu_linux__
#define _ORB_OS_LINUX       __gnu_linux__
#elif _WIN32
#define _ORB_OS_WINDOWS     _WIN32
#else
#error Unsupported operating system!
#endif

#ifdef __GNUC__
#define _ORB_CC_GCC     __GNUC_MINOR__
#elif _MSC_VER
#define _ORB_CC_MSC     _MSC_VER
#else
#error Unsupported compiler!
#endif

typedef char                int8;
typedef short               int16;
typedef int	                int32;
typedef long long           int64;
typedef unsigned char       uint8;
typedef unsigned short      uint16;
typedef unsigned int        uint32;
typedef unsigned long long  uint64;
typedef unsigned short      uchar;

#define _INT32_MIN          ((int32)0x80000000)
#define _INT32_MAX          ((int32)0x7fffffff)
#define _UINT32_MAX         ((uint32)0xffffffffUL)
#define _INT64_MIN          ((int64)0x8000000000000000LL)
#define _INT64_MAX          ((int64)0x7fffffffffffffffLL)
#define _UINT64_MAX         ((uint64)0xffffffffffffffffULL)

#include <functional>  

namespace orb
{
    template<typename T>
    T max(T x, T y) { return x >= y ? x : y; }

    template<typename T>
    T min(T x, T y) { return x <= y ? x : y; }

    class Error;
    class ThreadLocal;
}

class orb::ThreadLocal
{
public:
    struct Data;

    ThreadLocal();
    ThreadLocal(std::function<void(void*)> d);
    ~ThreadLocal();

    void* get() const;
    void set(void *v);

private:
    ThreadLocal(const ThreadLocal&) = delete;
    ThreadLocal& operator=(const ThreadLocal&) = delete;

    static void default_exit(void *v);

private:
    std::function<void(void*)> dtor_;
    uint32 key_;
};

class orb::Error
{
public:
    struct Data;

    Error() = delete;

    static void clear();
    static void set_error(uint32 code, const char *format, ...);
    static bool has_error();

    static const char *message();
    static uint32 code();
};
