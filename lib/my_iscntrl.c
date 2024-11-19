/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_iscntrl
*/

#include "../include/my.h"

int my_iscntrl(int c)
{
    if (c >= 0 && c <= 31)
        return 1;
    return 0;
}
