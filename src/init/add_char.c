/*
** EPITECH PROJECT, 2019
** crocus
** File description:
** add character
*/

#include "my.h"

static void add_char2(number_t *number)
{
    number->nb_3[0] = strdup((char *) {"0000 "});
    number->nb_3[1] = strdup((char *) {"    0"});
    number->nb_3[2] = strdup((char *) {" 000 "});
    number->nb_3[3] = strdup((char *) {"    0"});
    number->nb_3[4] = strdup((char *) {"0000 "});
    number->nb_4[0] = strdup((char *) {"  00 "});
    number->nb_4[1] = strdup((char *) {" 0 0 "});
    number->nb_4[2] = strdup((char *) {"0  0 "});
    number->nb_4[3] = strdup((char *) {"00000"});
    number->nb_4[4] = strdup((char *) {"   0 "});
    number->nb_5[0] = strdup((char *) {"00000"});
    number->nb_5[1] = strdup((char *) {"0    "});
    number->nb_5[2] = strdup((char *) {"0000 "});
    number->nb_5[3] = strdup((char *) {"    0"});
    number->nb_5[4] = strdup((char *) {"0000 "});
}

static void add_char3(number_t *number)
{
    number->nb_6[0] = strdup((char *) {" 000 "});
    number->nb_6[1] = strdup((char *) {"0    "});
    number->nb_6[2] = strdup((char *) {"0000 "});
    number->nb_6[3] = strdup((char *) {"0   0"});
    number->nb_6[4] = strdup((char *) {" 000 "});
    number->nb_7[0] = strdup((char *) {"00000"});
    number->nb_7[1] = strdup((char *) {"    0"});
    number->nb_7[2] = strdup((char *) {"   0 "});
    number->nb_7[3] = strdup((char *) {"  0  "});
    number->nb_7[4] = strdup((char *) {" 0   "});
    number->nb_8[0] = strdup((char *) {" 000 "});
    number->nb_8[1] = strdup((char *) {"0   0"});
    number->nb_8[2] = strdup((char *) {" 000 "});
    number->nb_8[3] = strdup((char *) {"0   0"});
    number->nb_8[4] = strdup((char *) {" 000 "});
}

static void add_char4(number_t *number)
{
    number->nb_9[0] = strdup((char *) {" 000 "});
    number->nb_9[1] = strdup((char *) {"0   0"});
    number->nb_9[2] = strdup((char *) {" 0000"});
    number->nb_9[3] = strdup((char *) {"    0"});
    number->nb_9[4] = strdup((char *) {" 000 "});
}

void add_char(number_t *number)
{
    number->nb_0[0] = strdup((char *) {" 000 "});
    number->nb_0[1] = strdup((char *) {"0   0"});
    number->nb_0[2] = strdup((char *) {"0   0"});
    number->nb_0[3] = strdup((char *) {"0   0"});
    number->nb_0[4] = strdup((char *) {" 000 "});
    number->nb_1[0] = strdup((char *) {" 000 "});
    number->nb_1[1] = strdup((char *) {"0 00 "});
    number->nb_1[2] = strdup((char *) {"  00 "});
    number->nb_1[3] = strdup((char *) {"  00 "});
    number->nb_1[4] = strdup((char *) {" 0000"});
    number->nb_2[0] = strdup((char *) {" 000 "});
    number->nb_2[1] = strdup((char *) {"0   0"});
    number->nb_2[2] = strdup((char *) {"   0 "});
    number->nb_2[3] = strdup((char *) {" 0   "});
    number->nb_2[4] = strdup((char *) {"00000"});
    add_char2(number);
    add_char3(number);
    add_char4(number);
}