/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_towlower
*/

#include "../include/my.h"

wint_t my_towlower(wint_t wc)
{
    if (wc >= 'A' && wc <= 'Z')
        return wc + 32;
    return wc;
}
