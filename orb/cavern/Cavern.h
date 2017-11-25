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

#pragma pack(push, 8)
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
#pragma pack(pop)

		class HashMap;
		class Cavern;
	}
}

class orb::cavern::HashMap
{
public:
    struct Bucket;

    static uint64 get_nextsize(uint64 size, uint64 *magic);

    void init(uint64 capacity, std::function<void*(void*, uint32)> alloc, std::function<void(void*)> dealloc);
    bool exists(Key &key);
    bool get(Key &key, Value &value);
    void put(Key &key, Value &value);
    void *end() const;

private:
    HashMap(const HashMap&) = delete;
    HashMap& operator=(const HashMap&) = delete;

    Bucket* find_bucket(Key &key, bool *exists);

private:
    uint64  magic_ = 0;
    uint64  capacity_ = 0;
    uint64  count_ = 0;

    std::function<void*(void*, uint32)> alloc_ = nullptr;
    std::function<void(void*)> dealloc_ = nullptr;

    Bucket  *buckets_ = nullptr;
};

class orb::cavern::Cavern
{
public:
};
