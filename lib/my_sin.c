/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_sin
*/

#include "../include/my.h"

double my_sin(double x)
{
    double term = x;
    double sum = x;
    int n = 1;

    while (term != 0.0) {
        term *= -x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }
    return sum;
}
