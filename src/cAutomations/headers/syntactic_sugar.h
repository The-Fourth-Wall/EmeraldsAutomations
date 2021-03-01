#ifndef __SYNTACTIC_SUGAR_H_
#define __SYNTACTIC_SUGAR_H_

/**
 * @macro: BLOCK
 * @desc: Expands to a do while loop that runs once
 *      Usefull for executing naked blocks
 * @param ... -> The block of code to run
 **/
#define BLOCK(...) do { \
    __VA_ARGS__ \
} while(0)

#define is ==
#define isnot !=
#define not !
#define and &&
#define or ||

#endif
