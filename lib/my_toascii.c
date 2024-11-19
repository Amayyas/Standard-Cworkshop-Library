/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_toascii
*/

#include "../include/my.h"

int my_toascii(int c)
{
    if (c >= 0 && c <= 127)
        return c;
    return c % 128;
}
