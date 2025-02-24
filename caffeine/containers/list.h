// Copyright (C) 2025  Gerson Ferreira <gersonfaneto.dev@gmail.com>
// See end of file for extended copyright information.

#ifndef CAFFEINE_LIST_H
#define CAFFEINE_LIST_H

#include <stddef.h>

typedef struct node_t node_t;
typedef struct list_t list_t;

#ifndef CAFFEINE_VAR
#define CAFFEINE_VAR

typedef void* var;

#endif // ifndef CAFFEINE_VAR

struct node_t
{
    node_t* __next;
    var     __data;
    size_t  __size;
};

struct list_t
{
    node_t* __leader;
    size_t  __lenght;

    void    (*clear) (list_t* self);
    void   (*insert) (list_t* self, var data, size_t size, size_t position);
    void   (*remove) (list_t* self, size_t position);
    void (*retrieve) (list_t* self, size_t position, var* store);
};

#ifdef CAFFEINE_LIST_IMPLEMENTATION

#include <stdlib.h>
#include <string.h>

#define CAFFEINE_ASSERT_IMPLEMENTATION
#include <caffeine/core/assert.h>

static node_t* __node_init__(var data, size_t size)
{
    node_t* node = (node_t*) malloc(sizeof(node_t));

    __ASSERT__(node != NULL, "Buy more RAM!");

    node->__next = NULL;
    node->__size = size;

    node->__data = malloc(size);

    __ASSERT__(node->__data != NULL, "Buy more RAM!");

    memcpy(node->__data, data, size);

    __ASSERT__(
        memcmp(node->__data, data, size) == 0,
        "Failed to send over!"
    );

    return node;
}

static void __node_deinit__(node_t* node)
{
    __ASSERT__(node != NULL, "You're joking, right?");
    __ASSERT__(node->__data != NULL, "You MUST be joking!");
    free(node->__data);
    free(node);
}

static void __list_clear__(list_t* self)
{
    __TODO__();
}

static void __list_insert__(list_t* self, var data, size_t size, size_t position)
{
    __TODO__();
}

static void __list_remove__(list_t* self, size_t position)
{
    __TODO__();
}

static void __list_retrieve__(list_t* self, size_t position, var* store)
{
    __TODO__();
}

list_t list_init(void)
{
    return (list_t)
    {
        .__leader = NULL,
        .__lenght = 0,

        .clear    = __list_clear__,
        .insert   = __list_insert__,
        .remove   = __list_remove__,
        .retrieve = __list_retrieve__,
    };
}

#endif // ifdef CAFFEINE_LIST_IMPLEMENTATION

#endif // ifndef CAFFEINE_LIST_H

// Caffeine :: Boost Your C Development.
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
