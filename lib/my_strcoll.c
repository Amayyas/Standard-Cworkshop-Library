/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strcoll
*/

#include "../include/my.h"

int my_strcoll(const char *string1, const char *string2)
{
    int i = 0;
    int j = 0;

    while (string1[i] != '\0' && string2[j] != '\0') {
        if (string1[i] != string2[j])
            return string1[i] - string2[j];
        i++;
        j++;
    }
    return string1[i] - string2[j];
}
