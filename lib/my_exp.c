/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_exp
*/

#include "../include/my.h"

double my_exp(double x)
{
    double result = 1.0;
    double term = 1.0;

    if (x == 0) {
        return 1.0;
    }
    if (x > 710)
    return 1.0 / 0.0;
    if (x < -710)
    return 0.0;
    for (int i = 1; i < 15; i++) {
        term *= x / i;
        result += term;
    }
    return result;
}
