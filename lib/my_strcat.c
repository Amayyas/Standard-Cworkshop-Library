/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strcat
*/

#include "../include/my.h"

char *my_strcat(char *string1, const char *string2)
{
    int i = 0;
    int j = 0;
    char *new_str = malloc(sizeof(char) *
        (my_strlen(string1) + my_strlen(string2) + 1));

    if (new_str == NULL)
        return NULL;
    while (string1[i] != '\0') {
        new_str[i] = string1[i];
        i++;
    }
    while (string2[j] != '\0') {
        new_str[i] = string2[j];
        i++;
        j++;
    }
    new_str[i] = '\0';
    return new_str;
}
