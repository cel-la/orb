#include "Cavern.h"

using orb::cavern::HashMap;

HashMap::HashMap()
{

}

HashMap::~HashMap()
{

}

void HashMap::init(uint64 total_bytes, void *alloc_data, std::function<void*(void*, uint32)> alloc, std::function<void(void*)> dealloc)
{

}

bool HashMap::exists(Key &key)
{
	return false;
}

bool HashMap::get(Key &key, Value &value)
{
	return false;
}

void HashMap::put(Key &key, Value &value)
{

}

void* HashMap::end() const
{
	return nullptr;
}

