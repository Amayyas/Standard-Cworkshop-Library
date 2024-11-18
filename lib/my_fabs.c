/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_fabs
*/

#include "../include/my.h"

double my_fabs(double x)
{
    union {
        double d;
        unsigned long long ull;
    } u;

    u.d = x;
    u.ull &= 0x7FFFFFFFFFFFFFFF;
    return u.d;
}
