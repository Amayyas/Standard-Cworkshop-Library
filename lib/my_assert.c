/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_assert
*/

#include "../include/my.h"

void my_assert(int expression)
{
    if (!expression) {
        write(2, "Assertion failed\n", 17);
        exit(84);
    }
}
