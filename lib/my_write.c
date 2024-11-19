/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_write
*/

#include "../include/my.h"

ssize_t my_write(int fd, const void *buf, size_t count)
{
    ssize_t bytes_written = 0;
    const char *buffer = (const char *)buf;
    ssize_t result = syscall(SYS_write, fd,
        buffer + bytes_written, count - bytes_written);

    while (bytes_written < (ssize_t)count) {
        if (result == -1) {
            return -1;
        }
        bytes_written += result;
    }
    return bytes_written;
}
