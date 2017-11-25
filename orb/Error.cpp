#include "Orb.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <string>

using orb::Error;

struct Error::Data
{
    uint32      code;
    std::string message;
};

static orb::ThreadLocal gTL([&](void *v) {
    Error::Data *p = static_cast<Error::Data*>(v);
    if (p)
    {
        printf("delete: %s\n", p->message.c_str());
        delete p;
    }
});

void Error::clear()
{
    Data *p = static_cast<Data *>(gTL.get());

    if (p)
    {
        p->code = 0;
        p->message.clear();
    }
}
 
void Error::set_error(uint32 code, const char *format, ...)
{
    Data *p = static_cast<Data *>(gTL.get());
    va_list ap, aq;
    int sz;
    int r;

    if (!p)
    {
        p = new Data();
        gTL.set(p);
    }

    p->code = code;
    if (!format || !*format)
    {
        p->message.clear();
        return;
    }

    sz = max(64, (int)strlen(format));
    va_start(ap, format);
    for (;;)
    {
        va_copy(aq, ap);
        p->message.resize(sz);
        r = vsnprintf((char*)p->message.c_str(), sz, format, aq);
        va_end(aq);

        if (r > sz - 1)
            sz *= 1.5;
        else
        {
            p->message.resize(r); 
            break;
        }
    }
    va_end(ap); 
}

bool Error::has_error()
{
    Data *p = static_cast<Data *>(gTL.get());

    return p && p->code != 0;
}

const char *Error::message()
{
    Data *p = static_cast<Data *>(gTL.get());

    if (p)
        return p->message.c_str();
    else
        return "";
}

uint32 Error::code()
{
    Data *p = static_cast<Data *>(gTL.get());

    if (p)
        return p->code;
    else
        return 0;
}
