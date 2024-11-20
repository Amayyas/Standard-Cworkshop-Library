/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strncpy
*/

#include "../include/my.h"

char *my_strncpy(char *string1, const char *string2, size_t count)
{
    size_t i = 0;

    while (string2[i] != '\0' && i < count) {
        string1[i] = string2[i];
        i++;
    }
    string1[i] = '\0';
    return string1;
}
