/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_puts
*/

#include "../include/my.h"

int my_puts(const char *string)
{
    write(1, string, my_strlen(string));
    write(1, "\n", 1);
    return 0;
}
