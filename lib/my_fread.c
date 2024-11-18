/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_fread
*/

#include "../include/my.h"

size_t my_fread(void *ptr, size_t size, size_t count, FILE *stream)
{
    size_t total_bytes = size * count;
    size_t bytes_read = 0;
    size_t n = my_read(fileno(stream),
    (char *)ptr + bytes_read, total_bytes - bytes_read);

    while (bytes_read < total_bytes) {
        if (n == 0) {
            break;
        }
        bytes_read += n;
    }
    return bytes_read / size;
}
