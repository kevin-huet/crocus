/*
** EPITECH PROJECT, 2019
** crocus
** File description:
** change number
*/

#include "my.h"

static char replace(char str, char c)
{
    if (str == '0')
        str = c;
    return (str);
}

static char **change_char_nb(char **str, char c)
{
    for (size_t i = 0; str[i]; i++) {
        for (size_t j = 0; str[i][j]; j++)
            str[i][j] = replace(str[i][j], c);
    }
    return (str);
}

static void check_who_change(number_t *number, int check, char c)
{
    (check == 0) ? number->nb_0 = change_char_nb(number->nb_0, c)
        : (check == 1) ? number->nb_1 = change_char_nb(number->nb_1, c)
        : (check == 2) ? number->nb_2 = change_char_nb(number->nb_2, c)
        : (check == 3) ? number->nb_3 = change_char_nb(number->nb_3, c)
        : (check == 4) ? number->nb_4 = change_char_nb(number->nb_4, c)
        : (check == 5) ? number->nb_5 = change_char_nb(number->nb_5, c)
        : (check == 6) ? number->nb_6 = change_char_nb(number->nb_6, c)
        : (check == 7) ? number->nb_7 = change_char_nb(number->nb_7, c)
        : (check == 8) ? number->nb_8 = change_char_nb(number->nb_8, c)
        : (check == 9) ? number->nb_9 = change_char_nb(number->nb_9, c)
        : exit(84);
}

void change_number(number_t *number, char *str, char *nb)
{
    int max_str = strlen(str) - 1;
    int check = 0;
    int col = 0;
    for (size_t i = 0; nb[i]; i++) {
        check = nb[i] - '0';
        col = check;
        if (col > max_str)
            col = (col - max_str - 1);
        check_who_change(number, check, str[col]);
    }
}
