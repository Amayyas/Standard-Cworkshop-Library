/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_putchar
*/

#include "../include/my.h"

int my_putchar(int c)
{
    write(1, &c, 1);
    return 0;
}
