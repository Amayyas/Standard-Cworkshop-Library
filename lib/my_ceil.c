/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_ceil
*/

#include "../include/my.h"

double my_ceil(double x)
{
    if (x < 0) {
        return (int)x;
    }
    if (x == (int)x) {
        return x;
    }
    return (int)x + 1;
}
