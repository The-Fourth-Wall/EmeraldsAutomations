#ifndef __DLL_EXPORT_H_
#define __DLL_EXPORT_H_

#ifdef _WIN32
    #ifdef WIN_EXPORT
        #ifdef __GNUC__
            #define __export __attribute__ ((dllexport))
        #else
            /* GCC might support the syntax below as well */
            #define __export __declspec(dllexport)
        #endif
    #else
        #ifdef __GNUC__
            #define __export __attribute__ ((dllimport))
        #else
            #define __export __declspec(dllimport)
        #endif
    #endif
    #define __not_export
#else
    #if __GNUC__ >= 4
        #define __export __attribute__ ((visibility ("default")))
        #define __not_export __attribute__ ((visibility ("hidden")))
    #else
        #define __export
        #define __not_export
    #endif
#endif

#endif
