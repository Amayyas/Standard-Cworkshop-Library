/*
** EPITECH PROJECT, 2024
** Standard Cworkshop Library
** File description:
** header
*/

#ifndef INCLUDED_MY_H
    #define INCLUDED_MY_H

    #define M_PI 3.14159265358979323846

    #define BUFFER_SIZE 26

    #define WCTRANS_TOLOWER 1
    #define WCTRANS_TOUPPER 2

    #include <stdlib.h>
    #include <math.h>
    #include <time.h>
    #include <assert.h>
    #include <stdio.h>
    #include <wchar.h>
    #include <nl_types.h>
    #include <ctype.h>
    #include <wctype.h>
    #include <locale.h>
    #include <setjmp.h>
    #include <string.h>
    #include <langinfo.h>
    #include <signal.h>
    #include <regex.h>
    #include <sys/syscall.h>
    #include <unistd.h>
    #include <limits.h>
    #include <errno.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>


int my_abs(int nb);
double my_acos(double x);
char *my_asctime_r(const struct tm *tm, char *buf, size_t buf_size);
char *my_asctime(const struct tm *time);
double my_asin(double x);
void my_assert(int expression);
double my_atan(double x);
double my_atan2(double y, double x);
double my_atof(const char *string);
int my_atoi(const char *string);
long my_atol(const char *string);
void *my_bsearch(const void *key, const void *base,
    int (*compare) (const void *element1, const void *element2));
void *my_calloc(size_t num, size_t size);
double my_ceil(double x);
double my_cos(double x);
double my_cosh(double x);
double my_exp(double x);
double my_fabs(double x);
int my_fclose(FILE *stream);
int my_ferror(FILE *stream);
int my_fgetc(FILE *stream);
char *my_fgets(char *string, int n, FILE *stream);
size_t my_fread(void *ptr, size_t size, size_t count, FILE *stream);
int my_getc(FILE *stream);
int my_isalnum(int c);
int my_isalpha(int c);
int my_isascii(int c);
int my_isblank(int c);
int my_iscntrl(int c);
int my_isdigit(int c);
struct lconv *my_localeconv(void);
void my_perror(const char *string);
int my_putc(int c, FILE *stream);
int my_putchar(int c);
int my_puts(const char *string);
int my_putenv(const char *varname);
ssize_t my_read(int fd, void *buf, size_t count);
double my_sin(double x);
double my_sqrt(double x);
int my_strcasecmp(const char *string1, const char *string2);
char *my_strcat(char *string1, const char *string2);
char *my_strchr(const char *string, int c);
int my_strcmp(const char *string1, const char *string2);
int my_strcoll(const char *string1, const char *string2);
char *my_strcpy(char *string1, const char *string2);
size_t my_strcspn(const char *string1, const char *string2);
char *my_strerror(int errnum);
size_t my_strlen(const char *string);
int my_strncasecmp(const char *string1, const char *string2, size_t count);
char *my_strncat(char *string1, const char *string2, size_t count);
int my_strncmp(const char *string1, const char *string2, size_t count);
char *my_strncpy(char *string1, const char *string2, size_t count);
char *my_strpbrk(const char *string1, const char *string2);
char *my_strptime(const char *buf, const char *format, struct tm *tm);
int my_toascii(int c);
int my_tolower(int c);
int my_toupper(int c);
wint_t my_towctrans(wint_t wc, wctrans_t desc);
wint_t my_towlower(wint_t wc);
wint_t my_towupper(wint_t wc);
ssize_t my_write(int fd, const void *buf, size_t count);

#endif
