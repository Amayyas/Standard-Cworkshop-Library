/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strncasecmp
*/

#include "../include/my.h"

int my_strncasecmp(const char *string1, const char *string2, size_t count)
{
    size_t i = 0;
    int res = 0;

    while (i < count) {
        if (my_tolower(string1[i]) != my_tolower(string2[i])) {
            res = my_tolower(string1[i]) - my_tolower(string2[i]);
            return res;
        }
        i++;
    }
    return 0;
}
