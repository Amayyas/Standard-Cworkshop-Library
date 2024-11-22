/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strtold
*/

#include "../include/my.h"

static long double parse_digits(const char *nptr, int *i)
{
    long double res = 0;

    for (; nptr[*i] != '\0'; (*i)++) {
        if (nptr[*i] >= '0' && nptr[*i] <= '9') {
            res = res * 10 + nptr[*i] - '0';
        } else {
            break;
        }
    }
    return res;
}

static long double parse_integer_part(const char *nptr, int *i, int *sign)
{
    long double res = 0;

    if (nptr[*i] == '-') {
        *sign = -1;
        (*i)++;
    }
    res = parse_digits(nptr, i);
    return res;
}

static long double parse_fractional_part(const char *nptr, int *i)
{
    long double after_point = 0;
    long double after_point_count = 0;

    if (nptr[*i] == '.') {
        (*i)++;
        for (; nptr[*i] != '\0'; (*i)++) {
            after_point = after_point * 10 + nptr[*i] - '0';
            after_point_count++;
        }
        for (int j = 0; j < after_point_count; j++)
            after_point /= 10;
    }
    return after_point;
}

long double my_strtold(const char *nptr, char **endptr)
{
    long double res = 0;
    int i = 0;
    int sign = 1;

    res = parse_integer_part(nptr, &i, &sign);
    res += parse_fractional_part(nptr, &i);
    res *= sign;
    if (endptr != NULL)
        *endptr = (char *)&nptr[i];
    return res;
}
