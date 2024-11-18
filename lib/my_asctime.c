/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_asctime
*/

#include "../include/my.h"

char *my_asctime(const struct tm *time)
{
    size_t buffer_size = 26;
    char *buffer = malloc(buffer_size);

    if (!buffer) {
        return NULL;
    }
    if (strftime(buffer, buffer_size, "%a %b %d %H:%M:%S %Y\n", time) == 0) {
        free(buffer);
        return NULL;
    }
    return buffer;
}
