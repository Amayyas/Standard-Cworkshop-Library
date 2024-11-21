/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_memmove
*/

#include "../include/my.h"

void *my_memmove(void *dest, const void *src, size_t count)
{
    unsigned char *d = dest;
    unsigned char *s = (unsigned char *)src;

    if (d < s) {
        for (size_t i = 0; i < count; i++)
            d[i] = s[i];
    } else {
        for (size_t i = count; i > 0; i--)
            d[i - 1] = s[i - 1];
    }
    return dest;
}
