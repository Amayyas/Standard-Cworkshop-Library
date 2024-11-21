/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_memchr
*/

#include "../include/my.h"

void *my_memchr(const void *buf, int c, size_t count)
{
    unsigned char *p = (unsigned char *)buf;
    unsigned char uc = c;

    for (size_t i = 0; i < count; i++) {
        if (p[i] == uc)
            return p + i;
    }
    return NULL;
}
