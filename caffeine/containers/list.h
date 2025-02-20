#ifndef CAFFEINE_LIST_H
#define CAFFEINE_LIST_H

#include <stdio.h>
#include <stdint.h>

#include <caffeine/core/assert.h>

typedef struct node_t node_t;
typedef struct list_t list_t;

#ifndef CAFFEINE_VAR
#define CAFFEINE_VAR

typedef void* var;

#endif // ifndef CAFFEINE_VAR

struct node_t
{
    node_t* __next;
    var __data;
    size_t __size;
};

struct list_t
{
    node_t* __leader;
    size_t __lenght;

    void (*clear)(list_t* self);
    void (*insert)(list_t* self, var data, size_t size, size_t position);
    void (*remove)(list_t* self, size_t position);
    void (*retrieve)(list_t* self, size_t position, var* store);
};

#ifdef CAFFEINE_LIST_IMPLEMENTATION

static void list_clear(list_t* self)
{
    __TODO__();
}

static void list_insert(list_t* self, var data, size_t size, size_t position)
{
    __TODO__();
}

static void list_remove(list_t* self, size_t position)
{
    __TODO__();
}

static void list_retrieve(list_t* self, size_t position, var* store)
{
    __TODO__();
}

list_t list_init(void)
{
    return (list_t)
    {
        .__leader = ((void*) 0),
        .__lenght = 0,

        .clear = list_clear,
        .insert = list_insert,
        .remove = list_remove,
        .retrieve = list_retrieve,
    };
}

#endif // ifdef CAFFEINE_LIST_IMPLEMENTATION

#endif // ifndef CAFFEINE_LIST_H

// vim: sw=4 ts=4 sts=4 et tw=80 nospell :
