/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_towupper
*/

#include "../include/my.h"

wint_t my_towupper(wint_t wc)
{
    if (wc >= 'a' && wc <= 'z')
        return wc - 32;
    return wc;
}
