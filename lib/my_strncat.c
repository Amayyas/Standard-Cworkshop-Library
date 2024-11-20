/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strncat
*/

#include "../include/my.h"

char *my_strncat(char *string1, const char *string2, size_t count)
{
    size_t i = 0;
    size_t j = 0;

    while (string1[i] != '\0')
        i++;
    while (string2[j] != '\0' && j < count) {
        string1[i] = string2[j];
        i++;
        j++;
    }
    string1[i] = '\0';
    return string1;
}
