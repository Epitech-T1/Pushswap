/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** permutation
*/

#include "../include/push.h"

void permutation_l_a(list_t *list, int pos1, int pos2)
{
    variable_t *nbr1 = list->l_a;
    variable_t *nbr2 = list->l_a;

    for (int i = 1; nbr1->next != NULL; i++)
    {
        if (pos1 == i)
            break;
        else
            nbr1 = nbr1->next;
    }
    for (int i = 1; nbr2->next != NULL; i++)
    {
        if (pos2 == i)
            break;
        else
            nbr2 = nbr2->next;
    }
    my_swap(&nbr1->nbr, &nbr2->nbr);
}

void permutation_l_b(list_t *list, int pos1, int pos2)
{
    variable_t *nbr1 = list->l_b;
    variable_t *nbr2 = list->l_b;

    for (int i = 1; nbr1->next != NULL; i++)
    {
        if (pos1 == i)
            break;
        else
            nbr1 = nbr1->next;
    }
    for (int i = 1; nbr2->next != NULL; i++)
    {
        if (pos2 == i)
            break;
        else
            nbr2 = nbr2->next;
    }
    my_swap(&nbr1->nbr, &nbr2->nbr);
}