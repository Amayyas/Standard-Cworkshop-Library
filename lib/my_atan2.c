/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_atan2
*/

#include "../include/my.h"

double my_atan2(double y, double x)
{
    double atan_result = my_atan(y / x);

    if (x == 0.0) {
        if (y > 0.0) {
            return M_PI / 2;
        }
        if (y < 0.0) {
            return - M_PI / 2;
        }
        return 0.0;
    }
    if (x < 0.0) {
        return atan_result + (y >= 0.0 ? M_PI : - M_PI);
    }
    return atan_result;
}
