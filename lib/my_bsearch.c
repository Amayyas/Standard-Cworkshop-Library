/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_bsearch
*/

#include "../include/my.h"

void *my_bsearch(const void *key, const void *base,
    int (*compare) (const void *element1, const void *element2))
{
    size_t num = 10;
    size_t size = sizeof(int);
    size_t low = 0;
    size_t high = num;
    size_t mid;

    while (low < high) {
        mid = low + (high - low) / 2;
        if (compare(key, (char *)base + mid * size) < 0) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return (void *)((char *)base + low * size);
}
