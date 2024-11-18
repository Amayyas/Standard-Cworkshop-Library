/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_acos
*/

#include "../include/my.h"

double my_acos(double x)
{
    const double c1 = 1.5707288;
    const double c2 = -0.2121144;
    const double c3 = 0.0742610;
    const double c4 = -0.0187293;
    double abs_x = x < 0 ? - x : x;
    double sqrt_part = my_sqrt(1.0 - abs_x);
    double result = c1 + (c2 * abs_x) +
    (c3 * abs_x * abs_x) + (c4 * abs_x * abs_x * abs_x);

    result *= sqrt_part;
    return x < 0 ? M_PI - result : result;
}
