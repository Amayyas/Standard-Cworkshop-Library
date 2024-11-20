/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_perror
*/

#include "../include/my.h"

void my_perror(const char *string)
{
    my_write(2, string, my_strlen(string));
    my_write(2, ": ", 2);
    my_write(2, my_strerror(errno), my_strlen(my_strerror(errno)));
    my_write(2, "\n", 1);
}
