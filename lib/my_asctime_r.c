/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_asctime_r
*/

#include "../include/my.h"

char *my_asctime_r(const struct tm *tm, char *buf, size_t buf_size)
{
    if (buf_size < BUFFER_SIZE) {
        return NULL;
    }
    if (strftime(buf, buf_size, "%a %b %d %H:%M:%S %Y\n", tm) == 0) {
        return NULL;
    }
    return buf;
}
