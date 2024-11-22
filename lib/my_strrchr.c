/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strrchr
*/

#include "../include/my.h"

char *my_strrchr(const char *string, int c)
{
    int i = my_strlen(string);

    while (i >= 0) {
        if (string[i] == c)
            return (char *)&string[i];
        i--;
    }
    return NULL;
}
