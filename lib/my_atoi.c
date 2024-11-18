/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_atoi
*/

#include "../include/my.h"

int my_atoi(const char *string)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    if (string[0] == '-') {
        sign = -1;
        i++;
    }
    for (; string[i] != '\0'; i++) {
        result = result * 10 + string[i] - '0';
    }
    return result * sign;
}
