/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_towctrans
*/

#include "../include/my.h"

wint_t my_towctrans(wint_t wc, wctrans_t desc)
{
    if (desc == NULL) {
        return wc;
    }
    if (desc == wctrans("toupper")) {
        if (wc >= L'a' && wc <= L'z') {
            return wc - (L'a' - L'A');
        }
    }
    if (desc == wctrans("tolower")) {
        if (wc >= L'A' && wc <= L'Z') {
            return wc + (L'a' - L'A');
        }
    }
    return wc;
}
