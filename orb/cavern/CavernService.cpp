#include "Cavern.h"


int main(int argc, char **argv)
{
    void *p;
    char buf[64 * 1024];
    orb::cavern::HashMap *hashmap;

    hashmap = (orb::cavern::HashMap*)buf;
    hashmap->init(20, realloc, free);
    p = hashmap->end();

    return 0;
}
