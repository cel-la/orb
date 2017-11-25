#pragma once

#include "../Orb.h"

namespace orb
{
	namespace cavern
	{
        enum Type
        {
            TYPE_NONE       = 0x00,
            TYPE_LONG       = 0x01,
            TYPE_DOUBLE     = 0x02,
            TYPE_SK_STRING  = 0x03,
            TYPE_STRING     = 0x04,
            TYPE_BINARY     = 0x05,
        };

        struct Key
        {
            Type        type;
            int64       lv_or_len;
            const uchar *str;
            uchar       data[16];
        };

        struct Value
        {
            Type            type;
            union
            {
                int64       lv_or_len;
                double      fv;
            };
            union
            {
                const uchar *str;
                const uint8 *data;
            };
        };

		class HashMap;
		class Cavern;
	}
}

class orb::cavern::HashMap
{
public:
    HashMap();
    ~HashMap();

    void init(uint64 total_bytes, void *alloc_data, std::function<void*(void*, uint32)> alloc, std::function<void(void*)> dealloc);
    bool exists(Key &key);
    bool get(Key &key, Value &value);
    void put(Key &key, Value &value);
    void *end() const;

private:
    HashMap(const HashMap&) = delete;
    HashMap& operator=(const HashMap&) = delete;
};

class orb::cavern::Cavern
{
public:
};
