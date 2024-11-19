/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_strerror
*/

#include "../include/my.h"

static char *get_error_message_1_to_5(int errnum)
{
    switch (errnum) {
        case 1:
            return "Operation not permitted";
        case 2:
            return "No such file or directory";
        case 3:
            return "No such process";
        case 4:
            return "Interrupted system call";
        case 5:
            return "I/O error";
        default:
            return NULL;
    }
}

static char *get_error_message_6_to_10(int errnum)
{
    switch (errnum) {
        case 6:
            return "No such device or address";
        case 7:
            return "Argument list too long";
        case 8:
            return "Exec format error";
        case 9:
            return "Bad file number";
        case 10:
            return "No child processes";
        default:
            return NULL;
    }
}

static char *get_error_message_11_to_13(int errnum)
{
    switch (errnum) {
        case 11:
            return "Try again";
        case 12:
            return "Out of memory";
        case 13:
            return "Permission denied";
        default:
            return NULL;
    }
}

char *my_strerror(int errnum)
{
    char *message = get_error_message_1_to_5(errnum);

    if (message != NULL)
        return message;
    message = get_error_message_6_to_10(errnum);
    if (message != NULL)
        return message;
    message = get_error_message_11_to_13(errnum);
    if (message != NULL)
        return message;
    return "Unknown error";
}
