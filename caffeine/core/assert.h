#ifndef CAFFEINE_ASSERT_H
#define CAFFEINE_ASSERT_H

#ifdef CAFFEINE_ASSERT_IMPLEMENTATION

#include <stdio.h>
#include <stdlib.h>

#ifndef __FUNCTION__
    #define __FUNCTION__ __func__
#endif // ifdef __FUNCTION__

#ifdef __DEBUG__
    #define __ASSERT__(condition, format, ...)           \
        do {                                             \
            if ((condition)) break;                      \
            fprintf(stderr, format "\n", ##__VA_ARGS__); \
            abort();                                     \
        } while (0)
    #define __TODO__(...)                                \
        __ASSERT__(0, "TODO :: `%s` at `%s:%d`",         \
                __FUNCTION__,                            \
                __FILE__,                                \
                __LINE__)
#else
    #define __TODO__(...)   ((void)0)
    #define __ASSERT__(...) ((void)0)
#endif // ifdef __DEBUG__

#endif // ifdef CAFFEINE_ASSERT_IMPLEMENTATION

#endif // ifndef CAFFEINE_ASSERT_H

// vim: sw=4 ts=4 sts=4 et tw=80 nospell :
