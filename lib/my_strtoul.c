/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strtoul
*/

#include "../include/my.h"

static int handle_sign(const char *str, int *index)
{
    if (str[*index] == '-') {
        (*index)++;
        return -1;
    }
    return 1;
}

static unsigned long int convert_char_to_value(char c, int base)
{
    switch (c) {
        case '0' ... '9':
            return c - '0';
        case 'A' ... 'Z':
            return c - 'A' + 10;
        case 'a' ... 'z':
            return c - 'a' + 10;
        default:
            return base;
    }
}

static unsigned long int convert_to_ulong(const char *string1,
    int base, int *index)
{
    unsigned long int res = 0;
    unsigned long int value;

    for (; string1[*index] != '\0'; (*index)++) {
        value = convert_char_to_value(string1[*index], base);
        if (value >= (unsigned long int)base)
            break;
        res = res * base + value;
    }
    return res;
}

unsigned long int my_strtoul(const char *string1, char **string2, int base)
{
    int i = 0;
    unsigned long int result;

    i = handle_sign(string1, &i);
    result = convert_to_ulong(string1, base, &i);
    if (string2 != NULL)
        *string2 = (char *)&string1[i];
    return result;
}
