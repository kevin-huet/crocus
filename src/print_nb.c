/*
** EPITECH PROJECT, 2019
** crocus
** File description:
** print number ascii
*/

#include "my.h"

static void print_selected_number(number_t *number, char c, int i, int len[])
{
    (c == '0') ? printf("%s", number->nb_0[i])
        : (c == '1') ? printf("%s", number->nb_1[i])
        : (c == '2') ? printf("%s", number->nb_2[i])
        : (c == '3') ? printf("%s", number->nb_3[i])
        : (c == '4') ? printf("%s", number->nb_4[i])
        : (c == '5') ? printf("%s", number->nb_5[i])
        : (c == '6') ? printf("%s", number->nb_6[i])
        : (c == '7') ? printf("%s", number->nb_7[i])
        : (c == '8') ? printf("%s", number->nb_8[i])
        : printf("%s", number->nb_9[i]);
    if ((len[0] - 1) != len[1])
        printf(" ");
}

void print_nb(number_t *number, char *av)
{
    int line = 0;
    int max = strlen(av);
    int len[2] = {max, 0};
    for (;line != 5; line++) {
        for (size_t i = 0; av[i]; i++) {
            len[1] = i;
            print_selected_number(number, av[i], line, len);
        }
        printf("\n");
    }
    return;
}
