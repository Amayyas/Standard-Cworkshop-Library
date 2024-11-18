/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_calloc
*/

#include "../include/my.h"

void *my_calloc(size_t num, size_t size)
{
    void *ptr = malloc(num * size);

    if (ptr == NULL) {
        return NULL;
    }
    for (size_t i = 0; i < num * size; i++) {
        *((char *)ptr + i) = 0;
    }
    return ptr;
}
