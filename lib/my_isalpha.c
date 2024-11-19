/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_isalpha
*/

#include "../include/my.h"

int my_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    return 0;
}
