/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_read
*/

#include "../include/my.h"

ssize_t my_read(int fd, void *buf, size_t count)
{
    ssize_t total_bytes_read = 0;
    ssize_t bytes_read = syscall(SYS_read, fd,
            (char *)buf + total_bytes_read, count - total_bytes_read);

    while (total_bytes_read < (ssize_t)count) {
        if (bytes_read < 0) {
            return -1;
        }
        if (bytes_read == 0) {
            break;
        }
        total_bytes_read += bytes_read;
    }
    return total_bytes_read;
}
