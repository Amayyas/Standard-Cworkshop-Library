/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_cosh
*/

#include "../include/my.h"

double my_cosh(double x)
{
    double exp_x = my_exp(x);

    if (x < 0) {
        x = -x;
    }
    return (exp_x + 1.0 / exp_x) / 2.0;
}
