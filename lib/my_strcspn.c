/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strcspn
*/

#include "../include/my.h"

static int is_in_string(char c, const char *string)
{
    size_t j = 0;

    while (string[j] != '\0') {
        if (c == string[j])
            return 1;
        j++;
    }
    return 0;
}

size_t my_strcspn(const char *string1, const char *string2)
{
    size_t i = 0;

    while (string1[i] != '\0') {
        if (is_in_string(string1[i], string2))
            return i;
        i++;
    }
    return i;
}
