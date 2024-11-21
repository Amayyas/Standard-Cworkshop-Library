/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_memset
*/

#include "../include/my.h"

void *my_memset(void *dest, int c, size_t count)
{
    unsigned char *d = dest;
    unsigned char uc = c;

    for (size_t i = 0; i < count; i++)
        d[i] = uc;
    return dest;
}
