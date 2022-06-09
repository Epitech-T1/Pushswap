/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** pushswap
*/

#include "../include/push.h"

static void new_nbr(list_t *list, int new_nbr)
{
    variable_t *new = malloc(sizeof(variable_t));

    new->nbr = new_nbr;
    new->next = list->l_a;
    list->l_a = new;
}

static list_t *init_variable(char **argv)
{
    list_t *list = malloc(sizeof(list_t));

    list->l_a = NULL;
    list->l_b = NULL;
    for (int i = my_len_tab(argv) - 1; i != 0; i--) {
        new_nbr(list, my_getnbr(argv[i]));
    }
    return (list);
}

static void free_all(list_t *list)
{
    while (list->l_a->next != NULL) {
        if (list->l_a != NULL) {
            free(list->l_a);
            list->l_a = list->l_a->next;
        }
    }
    free(list->l_a);
    free(list);
}

int main(int ac, char **av)
{
    list_t *list;

    if (ac == 1)
        return (84);
    list = init_variable(av);
    pushswap(list);
    free_all(list);
    return (0);
}