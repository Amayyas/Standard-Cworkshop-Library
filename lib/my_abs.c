/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_abs
*/

#include "../include/my.h"

int my_abs(int nb)
{
    if (nb < 0) {
        return - nb;
    }
    return nb;
}
