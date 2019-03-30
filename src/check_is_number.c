/*
** EPITECH PROJECT, 2019
** dante
** File description:
** check is number
*/

#include <ctype.h>
#include <stdlib.h>

int isNumeric (const char * s)
{
    char * p = NULL;
    if (s == NULL || *s == '\0' || isspace(*s))
        return 0;
    strtod(s, &p);
    return (*p == '\0');
}
