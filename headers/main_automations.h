#ifndef __MAIN_AUTOMATIONS_H_
#define __MAIN_AUTOMATIONS_H_

#include "../../cSuite.h"

#if __THROW_THE_TRASH_OUT == true
    #define _custom_entry_function(...) \
        int main(int argc, char **argv) { \
            _litterbin_new(&bin, &argc); \
            do __VA_ARGS__ while(0); \
            _litterbin_terminate(&bin); \
        }
#else
    #define _custom_entry_function(...) \
        int main(int argc, char **argv) { \
            do __VA_ARGS__ while(0); \
        }
#endif

#ifdef _custom_entry_function
    #define main(...) _custom_entry_function(__VA_ARGS__)
#else
    #define main(...) \
        int main(int argc, char **argv) { \
            do __VA_ARGS__ while(0); \
        }
#endif

#endif