/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_getc
*/

#include "../include/my.h"

int my_getc(FILE *stream)
{
    unsigned char ch;

    if (my_fread(&ch, 1, 1, stream) == 1) {
        return (int)ch;
    }
    return EOF;
}
