#ifndef __HASH_FUNCTIONS_H_
#define __HASH_FUNCTIONS_H_

#include "../dll_export.h"

#include <stdlib.h>

/**
 * @func: _simple_integer_hash
 * @desc: Performs integer hashing
 * @param ptr -> The pointer to return a hash of
 * @return The hashed integer
 **/
__export size_t _simple_integer_hash(void *ptr);

/** 32 bits hash **/
__export size_t _32bit_integer_hash(void *ptr);

/** 64 bits hash **/
__export size_t _64bit_integer_hash(void *ptr);

#endif
