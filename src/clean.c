/*
** EPITECH PROJECT, 2019
** crocus
** File description:
** clean
*/

#include "my.h"

static void clean_array(number_t *number)
{
    free(number->nb_0);
    free(number->nb_1);
    free(number->nb_2);
    free(number->nb_3);
    free(number->nb_4);
    free(number->nb_5);
    free(number->nb_6);
    free(number->nb_7);
    free(number->nb_8);
    free(number->nb_9);
}

void clean(number_t *number)
{
    for (size_t i = 0; i < 5; i++) {
        free(number->nb_0[i]);
        free(number->nb_1[i]);
        free(number->nb_2[i]);
        free(number->nb_3[i]);
        free(number->nb_4[i]);
        free(number->nb_5[i]);
        free(number->nb_6[i]);
        free(number->nb_7[i]);
        free(number->nb_8[i]);
        free(number->nb_9[i]);
    }
    clean_array(number);
}
