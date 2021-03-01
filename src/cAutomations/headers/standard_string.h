#ifndef __STANDARD_STRING_H_
#define __STANDARD_STRING_H_

#include "dll_export.h"

#include <string.h>

/**
 * @func: _strlen
 * @desc: Accurate equivalent of string.h 'strlen' function
 * @param s -> The string to measure the length of
 * @return The number of characters in the string
 **/
__export size_t _strlen(const char *s);

/**
 * @func: _strcmp
 * @desc: Accurate equivalent of string.h 'strcmp' function
 * @param a -> The first string to compare
 * @param b -> The second string to compare
 * @return A bool signaling weather the strings are equal or not
 **/
__export int _strcmp(const char *a, const char *b);

/**
 * @func: _memmove
 * @desc: Accurate equivalent of string.h 'memmove' function
 * @param dest -> The dest pointer to move memory to
 * @param str -> The source string to copy from
 * @param n -> The size of the source string
 **/
__export void *_memmove(void *dest, const void *src, size_t n);

#endif
