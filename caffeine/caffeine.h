#ifndef CAFFEINE_H_
#define CAFFEINE_H_

// #include <caffeine/containers.h>
// #include <caffeine/network.h> 
// #include <caffeine/core.h>
// #include <caffeine/tui.h>
// ...

#ifdef CAFFEINE_IMPLEMENTATION

#include <stdio.h>

static inline void say_hello(const char* name)
{
    printf("Hello, %s!\n", name);
}

#endif // ifdef CAFFEINE_IMPLEMENTATION

#endif // ifndef CAFFEINE_H_

// vim: sw=4 ts=4 sts=4 et tw=80 nospell :
