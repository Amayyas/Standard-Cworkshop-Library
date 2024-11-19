/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_wctrans
*/

#include "../include/my.h"

wctrans_t my_wctrans(const char *desc)
{
    if (desc == NULL) {
        return NULL;
    }
    if (my_strcmp(desc, "toupper") == 0) {
        return (wctrans_t)1;
    } else if (my_strcmp(desc, "tolower") == 0) {
        return (wctrans_t)2;
    }
    return NULL;
}
