/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strstr
*/

#include "../include/my.h"

char *my_strstr(char const *string1, char const *string2)
{
    char const *i;
    char const *j;

    if (*string2 == '\0') {
        return (char *)string1;
    }
    while (*string1 != '\0') {
        i = string1;
        j = string2;
        while (*j != '\0' && *i == *j) {
            i++;
            j++;
        }
        if (*j == '\0') {
            return (char *)string1;
        }
        string1++;
    }
    return NULL;
}
