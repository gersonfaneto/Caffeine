// Copyright (C) 2025  Gerson Ferreira <gersonfaneto.dev@gmail.com>
// See end of file for extended copyright information.

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

// Caffeine :: Boost your C development.
// Copyright (C) 2025  Gerson Ferreira <gersonfaneto.dev@gmail.com>
//
// This file is part of Caffeine.
//
// Caffeine is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Caffeine is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Caffeine.  If not, see <https://www.gnu.org/licenses/>.

// vim: sw=4 ts=4 sts=4 et tw=80 nospell :
