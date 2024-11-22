/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strtok
*/

#include "../include/my.h"

static void update_save_ptr(char **save_ptr, char *string1)
{
    if (string1 != NULL)
        *save_ptr = string1;
}

static char *find_next_token(const char *string2)
{
    char *save_ptr = NULL;

    save_ptr += my_strspn(save_ptr, string2);
    if (*save_ptr == '\0') {
        save_ptr = NULL;
        return NULL;
    }
    return save_ptr;
}

static void terminate_token(char *token, const char *string2)
{
    char *save_ptr = NULL;

    save_ptr = token + my_strcspn(token, string2);
    if (*save_ptr != '\0') {
        *save_ptr = '\0';
        save_ptr++;
    } else {
        save_ptr = NULL;
    }
}

char *my_strtok(char *string1, const char *string2)
{
    char *token;
    char *save_ptr = NULL;

    update_save_ptr(&save_ptr, string1);
    token = find_next_token(string2);
    if (token == NULL)
        return NULL;
    terminate_token(token, string2);
    return token;
}
