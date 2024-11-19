/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_isblank
*/

#include "../include/my.h"

int my_isblank(int c)
{
    if (c == ' ' || c == '\t')
        return 1;
    return 0;
}
