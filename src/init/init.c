/*
** EPITECH PROJECT, 2019
** crocus
** File description:
** init array
*/

#include "my.h"

void init_number_line(number_t *number)
{
    for (size_t i = 0; i < 5; i++) {
        number->nb_0[i] = malloc(sizeof(char) * 5 + 1);
        number->nb_1[i] = malloc(sizeof(char) * 5 + 1);
        number->nb_2[i] = malloc(sizeof(char) * 5 + 1);
        number->nb_3[i] = malloc(sizeof(char) * 5 + 1);
        number->nb_4[i] = malloc(sizeof(char) * 5 + 1);
        number->nb_5[i] = malloc(sizeof(char) * 5 + 1);
        number->nb_6[i] = malloc(sizeof(char) * 5 + 1);
        number->nb_7[i] = malloc(sizeof(char) * 5 + 1);
        number->nb_8[i] = malloc(sizeof(char) * 5 + 1);
        number->nb_9[i] = malloc(sizeof(char) * 5 + 1);
    }
    init_back_slash(number);
}

void init_back_slash(number_t *number)
{
    number->nb_0[5] = 0;
    number->nb_1[5] = 0;
    number->nb_2[5] = 0;
    number->nb_3[5] = 0;
    number->nb_4[5] = 0;
    number->nb_5[5] = 0;
    number->nb_6[5] = 0;
    number->nb_7[5] = 0;
    number->nb_8[5] = 0;
    number->nb_9[5] = 0;
}

void init_number(number_t *number)
{
    number->nb_0 = malloc(sizeof(char *) * 5 + 1);
    number->nb_1 = malloc(sizeof(char *) * 5 + 1);
    number->nb_2 = malloc(sizeof(char *) * 5 + 1);
    number->nb_3 = malloc(sizeof(char *) * 5 + 1);
    number->nb_4 = malloc(sizeof(char *) * 5 + 1);
    number->nb_5 = malloc(sizeof(char *) * 5 + 1);
    number->nb_6 = malloc(sizeof(char *) * 5 + 1);
    number->nb_7 = malloc(sizeof(char *) * 5 + 1);
    number->nb_8 = malloc(sizeof(char *) * 5 + 1);
    number->nb_9 = malloc(sizeof(char *) * 5 + 1);
    init_number_line(number);
    add_char(number);
    return;
}
