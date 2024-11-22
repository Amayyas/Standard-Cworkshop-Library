/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_islower
*/

#include "../include/my.h"

int my_islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}
