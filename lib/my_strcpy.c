/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strcpy
*/

#include "../include/my.h"

char *my_strcpy(char *string1, const char *string2)
{
    int i = 0;

    while (string2[i] != '\0') {
        string1[i] = string2[i];
        i++;
    }
    string1[i] = '\0';
    return string1;
}
