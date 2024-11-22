/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strtod
*/

#include "../include/my.h"

static double parse_integer_part(const char *nptr, int *i, int *sign)
{
    double res = 0;

    if (nptr[*i] == '-') {
        *sign = -1;
        (*i)++;
    }
    for (; nptr[*i] != '\0' && nptr[*i] != '.'; (*i)++) {
        res = res * 10 + nptr[*i] - '0';
    }
    return res;
}

static double parse_fractional_part(const char *nptr, int *i)
{
    double res = 0;
    int after_point = 0;
    int after_point_count = 0;

    if (nptr[*i] == '.') {
        (*i)++;
        for (; nptr[*i] != '\0'; (*i)++) {
            after_point = after_point * 10 + nptr[*i] - '0';
            after_point_count++;
        }
    }
    for (int j = 0; j < after_point_count; j++)
        res /= 10;
    res += after_point;
    return res;
}

double my_strtod(const char *nptr, char **endptr)
{
    int i = 0;
    int sign = 1;
    double res = parse_integer_part(nptr, &i, &sign);

    res += parse_fractional_part(nptr, &i);
    res *= sign;
    if (endptr != NULL)
        *endptr = (char *)&nptr[i];
    return res;
}
