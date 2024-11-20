/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_ferror
*/

#include "../include/my.h"

int my_ferror(FILE *stream)
{
    if (stream == NULL) {
        return 1;
    }
    return stream->_flags & _IO_ERR_SEEN ? 1 : 0;
}
