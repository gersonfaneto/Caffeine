/*
 * Copyright (C) 2025  Gerson Ferreira <gersonfaneto.dev@gmail.com>
 * See end of file for extended copyright information.
 */

#define CAFFEINE_LIST_IMPLEMENTATION
#include <caffeine/containers/list.h>

int main(void)
{
    list_t list = list_init();

    index_a i;

    for (i = 0; i < 10; ++i)
    {
        int x = (i + 1);
        list.insert(&list, &x, sizeof(x), i);
    }

    printf("list.__lenght :: %lu\n", list.__lenght);

    lenght_a llenght = list.__lenght;

    for (i = 0; i < llenght; ++i)
    {
        index_a j = (llenght - i - 1);
        var x = NULL;
        list.retrieve(&list, j, &x); list.remove(&list, j);
        printf("@%lu :: %d\n", j, *(int*) x);
        free(x);
    }

    printf("list.__lenght :: %lu\n", list.__lenght);

    list.clear(&list);

    return 0;
}

/*
 * Caffeine :: Boost Your C Development.
 * Copyright (C) 2025  Gerson Ferreira <gersonfaneto.dev@gmail.com>
 *
 * This file is part of Caffeine.
 *
 * Caffeine is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Caffeine is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Caffeine.  If not, see <https://www.gnu.org/licenses/>.
 */

/* vim: sw=4 ts=4 sts=4 et tw=80 nospell : */
