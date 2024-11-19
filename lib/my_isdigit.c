/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_isdigit
*/

#include "../include/my.h"

int my_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}
