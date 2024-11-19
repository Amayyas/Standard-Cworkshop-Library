/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_isalnum
*/

#include "../include/my.h"

int my_isalnum(int c)
{
    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||
    (c >= 'a' && c <= 'z'))
        return 1;
    return 0;
}
