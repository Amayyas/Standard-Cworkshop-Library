/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_rand
*/

#include "../include/my.h"

int my_rand(void)
{
    int seed = 0;

    if (seed == 0)
        seed = time(NULL);
    seed = (seed * 1103515245 + 12345) % 2147483648;
    return seed;
}
