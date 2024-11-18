/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_atof
*/

#include "../include/my.h"

static double get_decimal_part(const char *string, int *index)
{
    double decimal = 0;
    double j = 10;
    int i = *index;

    while (string[i] != '\0') {
        decimal += (string[i] - '0') / j;
        i++;
        j *= 10;
    }
    *index = i;
    return decimal;
}

double my_atof(const char *string)
{
    double result = 0;
    int sign = 1;
    int i = 0;

    if (string[0] == '-') {
        sign = -1;
        i++;
    }
    for (; string[i] != '.' && string[i] != '\0'; i++) {
        result = result * 10 + string[i] - '0';
    }
    if (string[i] == '.') {
        i++;
        result += get_decimal_part(string, &i);
    }
    return result * sign;
}
