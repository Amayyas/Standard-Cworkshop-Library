/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strcasecmp
*/

#include "../include/my.h"

int my_srtcasecmp(const char *string1, const char *string2)
{
    int i = 0;
    int j = 0;

    while (string1[i] != '\0' && string2[j] != '\0') {
        if (my_tolower(string1[i]) != my_tolower(string2[j]))
            return my_tolower(string1[i]) - my_tolower(string2[j]);
        i++;
        j++;
    }
    return my_tolower(string1[i]) - my_tolower(string2[j]);
}