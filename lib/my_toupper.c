/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_toupper
*/

#include "../include/my.h"

int my_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}
