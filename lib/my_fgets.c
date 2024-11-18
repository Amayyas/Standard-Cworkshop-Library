/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_fgets
*/

#include "../include/my.h"

static int read_characters(char *string, int n, FILE *stream)
{
    int i = 0;
    char ch;

    for (i = 0; i < n - 1; i++) {
        ch = my_fgetc(stream);
        if (ch == EOF) {
            return (i == 0) ? -1 : i;
        }
        string[i] = ch;
        if (ch == '\n') {
            i++;
            break;
        }
    }
    string[i] = '\0';
    return i;
}

char *my_fgets(char *string, int n, FILE *stream)
{
    int result = read_characters(string, n, stream);

    if (string == NULL || n <= 0 || stream == NULL) {
        return NULL;
    }
    if (result == -1) {
        return NULL;
    }
    return string;
}
