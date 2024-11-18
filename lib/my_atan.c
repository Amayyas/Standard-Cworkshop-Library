/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_atan
*/

#include "../include/my.h"

double my_atan(double x)
{
    const double c1 = 0.999866;
    const double c2 = -0.3302995;
    const double c3 = 0.180141;
    const double c4 = -0.085133;
    const double c5 = 0.0208351;
    double abs_x = x < 0 ? - x : x;
    double result;

    if (abs_x <= 1.0) {
        result = c1 * abs_x + c2 * abs_x * abs_x * abs_x
        + c3 * abs_x * abs_x * abs_x * abs_x * abs_x
        + c4 * abs_x * abs_x * abs_x * abs_x * abs_x * abs_x * abs_x
        + c5 * abs_x * abs_x * abs_x * abs_x * abs_x * abs_x * abs_x *
        abs_x * abs_x;
    } else {
        result = M_PI / 2 - my_atan(1.0 / abs_x);
    }
    return x < 0 ? - result : result;
}
