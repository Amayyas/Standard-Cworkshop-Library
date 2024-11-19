/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_tolower
*/

#include "../include/my.h"

int my_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}
