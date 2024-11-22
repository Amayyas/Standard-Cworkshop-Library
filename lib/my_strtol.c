/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strtol
*/

#include "../include/my.h"

static int char_to_value(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 10;
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 10;
    return -1;
}

long int my_strtol(const char *nptr, char **endptr, int base)
{
    long int res = 0;
    int i = 0;
    int sign = 1;
    int value;

    if (nptr[i] == '-') {
        sign = -1;
        i++;
    }
    for (; nptr[i] != '\0'; i++) {
        value = char_to_value(nptr[i]);
        if (value == -1)
            break;
        res = res * base + value;
    }
    res *= sign;
    if (endptr != NULL)
        *endptr = (char *)&nptr[i];
    return res;
}
