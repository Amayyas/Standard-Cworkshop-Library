/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_putc
*/

#include "../include/my.h"

int my_putc(int c, FILE *stream)
{
    write(stream->_fileno, &c, 1);
    return 0;
}
