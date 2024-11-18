/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_sqrt
*/

#include "../include/my.h"

double my_sqrt(double x)
{
    double result = 0;
    double i = 0;

    while (i * i <= x) {
        result = i;
        i += 0.1;
    }
    i = 0;
    while (i < 10) {
        result = (result + x / result) / 2;
        i++;
    }
    return result;
}
