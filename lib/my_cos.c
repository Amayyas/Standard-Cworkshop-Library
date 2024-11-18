/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_cos
*/

#include "../include/my.h"

double my_cos(double x)
{
    double x2 = x * x;
    double x4 = x2 * x2;

    if (x > 3.141592653589793) {
        x -= 2 * 3.141592653589793;
    } else if (x < -3.141592653589793) {
        x += 2 * 3.141592653589793;
    }
    return 1.0 - (x2 / 2.0) + (x4 / 24.0);
}
