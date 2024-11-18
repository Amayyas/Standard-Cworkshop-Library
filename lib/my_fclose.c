/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_fclose
*/

#include "../include/my.h"

int my_fclose(FILE *stream)
{
    int fd = fileno(stream);

    if (stream == NULL) {
        return EOF;
    }
    if (fd == -1) {
        return EOF;
    }
    if (close(fd) == -1) {
        return EOF;
    }
    return 0;
}
