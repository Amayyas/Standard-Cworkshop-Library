/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_memcpy
*/

#include "../include/my.h"

void *my_memcpy(void *dest, const void *src, size_t count)
{
    unsigned char *d = dest;
    unsigned char *s = (unsigned char *)src;

    for (size_t i = 0; i < count; i++)
        d[i] = s[i];
    return dest;
}
