/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_isupper
*/

#include "../include/my.h"

int my_isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}
