/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_memcmp
*/

#include "../include/my.h"

int my_memcmp(const void *buf1, const void *buf2, size_t count)
{
    unsigned char *p1 = (unsigned char *)buf1;
    unsigned char *p2 = (unsigned char *)buf2;

    for (size_t i = 0; i < count; i++) {
        if (p1[i] != p2[i])
            return p1[i] - p2[i];
    }
    return 0;
}
