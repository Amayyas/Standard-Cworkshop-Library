/*
** EPITECH PROJECT, 2024
** Standard-Cworkshop-Library
** File description:
** my_putenv
*/

#include "../include/my.h"

int add_to_environ(const char *varname)
{
    extern char **environ;
    size_t env_count;
    char **new_environ;

    for (env_count = 0; environ[env_count] != NULL; ++env_count);
    new_environ = malloc((env_count + 2) * sizeof(char *));
    if (new_environ == NULL) {
        return -1;
    }
    for (size_t i = 0; i < env_count; ++i) {
        new_environ[i] = environ[i];
    }
    new_environ[env_count] = strdup(varname);
    new_environ[env_count + 1] = NULL;
    environ = new_environ;
    return 0;
}

int my_putenv(const char *varname)
{
    extern char **environ;
    size_t len = my_strlen(varname);
    char **env;

    if (varname == NULL || my_strchr(varname, '=') == NULL) {
        return -1;
    }
    for (env = environ; *env != NULL; ++env) {
        if (strncmp(*env, varname, len) == 0 && (*env)[len] == '=') {
            *env = strdup(varname);
            return 0;
        }
    }
    return add_to_environ(varname);
}
