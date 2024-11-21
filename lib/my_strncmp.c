/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strncmp
*/

#include "../include/my.h"

int my_strncmp(const char *string1, const char *string2, size_t count)
{
    size_t i = 0;
    int res = 0;

    while (i < count) {
        if (string1[i] != string2[i]) {
            res = string1[i] - string2[i];
            return res;
        }
        i++;
    }
    return 0;
}
