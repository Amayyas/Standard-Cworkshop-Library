/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strchr
*/

#include "../include/my.h"

char *my_strchr(const char *string, int c)
{
    int i = 0;

    while (string[i] != '\0') {
        if (string[i] == c)
            return (char *)&string[i];
        i++;
    }
    return NULL;
}
