/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_isascii
*/

#include "../include/my.h"

int my_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return 1;
    return 0;
}
