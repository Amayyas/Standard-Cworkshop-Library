/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_fgetc
*/

#include "../include/my.h"

int my_fgetc(FILE *stream)
{
    char ch;

    if (my_fread(&ch, 1, 1, stream) == 1) {
        return (int)ch;
    }
    return EOF;
}
