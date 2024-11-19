/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strlen
*/

#include "../include/my.h"

size_t my_strlen(const char *string)
{
    size_t i = 0;

    while (string[i] != '\0')
        i++;
    return i;
}
