/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** tri
*/

#include "../include/push.h"

static void delete(list_t *list)
{
    variable_t *delete = list->l_a;

    if (list->l_a != NULL) {
        list->l_a = list->l_a->next;
        free(delete);
    }
}

static int check_order(list_t *list)
{
    variable_t *tmp_order = list->l_a;
    variable_t *tmp_order1 = list->l_b;

    while (tmp_order->next != NULL) {
        if (tmp_order->nbr > tmp_order->next->nbr)
            return (1);
        tmp_order = tmp_order->next;
    }
    if (tmp_order1 != NULL) {
        return (-1);
    }
    return (0);
}

static void print_action(char *str, list_t *list)
{
    unsigned int res = check_order(list);

    printf("%s", str);
    if (res != 0)
        my_putchar(' ');
}

static void pushswap_next(list_t *list)
{
    if (check_order(list) == 1) {
        insert_new_list(&list->l_a, &list->l_b);
        print_action("pb", list);
    }
    if (position(list, 1) < position(list, 2) && list->l_b != NULL) {
        permutation_l_b(list, 1, 2);
        print_action("sb", list);
    }
    if (check_order(list) == -1 && list->l_b != NULL) {
        insert_first(&list->l_a, &list->l_b);
        print_action("pa", list);
    }
}

void pushswap(list_t *list)
{
    while (check_order(list) != 0) {
        if (position(list, 1) > position(list, 2)) {
            permutation_l_a(list, 1, 2);
            print_action("sa", list);
        }
        else if (position(list, 1) < position(list, last(list))) {
            insert_end(&list->l_a, list);
            delete(list);
            print_action("ra", list);
        }
        pushswap_next(list);
    }
    my_putchar('\n');
}