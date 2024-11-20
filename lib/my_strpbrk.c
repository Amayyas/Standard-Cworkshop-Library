/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strpbrk
*/

#include "../include/my.h"


int is_in_string(char c, const char *string2)
{
    int j = 0;

    while (string2[j] != '\0') {
        if (c == string2[j])
            return 1;
        j++;
    }
    return 0;
}

char *my_strpbrk(const char *string1, const char *string2)
{
    int i = 0;

    while (string1[i] != '\0') {
        if (is_in_string(string1[i], string2))
            return (char *)&string1[i];
        i++;
    }
    return NULL;
}
