/*
** EPITECH PROJECT, 2019
** crocus
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    number_t number = {0};
    init_number(&number);
    if (ac == 3) {
        if (!strcmp(av[1], "-n") && isNumeric(av[2]))
            print_nb(&number, av[2]);
    }
    else if (ac == 5) {
        if (!strcmp(av[1], "-s") && !strcmp(av[3], "-n") && isNumeric(av[4])) {
            change_number(&number, av[2], av[4]);
            print_nb(&number, av[4]);
        }
    }
    else {
        clean(&number);
        return (84);
    }
    clean(&number);
    return (0);
}
