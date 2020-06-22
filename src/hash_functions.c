#include "../../cSuite.h"

size_t _simple_integer_hash(void *ptr) {
    size_t key = (size_t)ptr;

    /* SIMPLE ROTATION */
    key = ((key >> 16) ^ key) * 0x45d9f3b;
    key = ((key >> 16) ^ key) * 0x45d9f3b;
    key = (key >> 16) ^ key;

    /* Knuth's Multiplicative Method */
    return (key >> 3) * 2654435761;
}

size_t _32bit_integer_hash(void *ptr) {
    size_t key = (size_t)ptr;

    /* 32 BIT FUNCTION */
    key = (key + 0x7ed55d16) + (key << 12);
    key = (key ^ 0xc761c23c) ^ (key >> 19);
    key = (key + 0x165667b1) + (key << 5);
    key = (key + 0xd3a2646c) ^ (key << 9);
    key = (key + 0xfd7046c5) + (key << 3);
    key = (key ^ 0xb55a4f09) ^ (key >> 16);

    /* Knuth's Multiplicative Method */
    return (key >> 3) * 2654435761;
}

size_t _64bit_integer_hash(void *ptr) {
    size_t key = (size_t)ptr;

    /* 64 BIT FUNCTION */
    key = (~key) + (key << 18);
    key ^= (key >> 31);
    key *= 21;
    key ^= (key >> 11);
    key += (key << 6);
    key ^= (key >> 22);

    /* Knuth's Multiplicative Method */
    return (key >> 3) * 2654435761;
}