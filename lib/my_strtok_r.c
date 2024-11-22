/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strtok_r
*/

#include "../include/my.h"

char *my_strtok_r(char *string, const char *seps, char **lasts)
{
    char *ret;

    if (string == NULL)
        string = *lasts;
    string += my_strspn(string, seps);
    if (*string == '\0') {
        *lasts = string;
        return NULL;
    }
    ret = string;
    string += my_strcspn(string, seps);
    if (*string != '\0') {
        *string = '\0';
        string++;
    }
    *lasts = string;
    return ret;
}
