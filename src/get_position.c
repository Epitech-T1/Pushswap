/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** get_position
*/

#include "../include/push.h"

int position(list_t *list, int pos2)
{
    variable_t *position = list->l_a;

    for (int i = 1; position->next != NULL; i++)
    {
        if (pos2 == i)
            return (position->nbr);
        else
            position = position->next;
    }
    return (0);
}

int last(list_t *list)
{
    variable_t *end = list->l_a;
    unsigned int i;

    for (i = 1; end->next != NULL; i++)
        end = end->next;
    return (i);
}

void insert_end(variable_t **new_end, list_t *list)
{
    variable_t *tmp = malloc(sizeof(variable_t));
    variable_t *tmp2 = *new_end;

    tmp->nbr = list->l_a->nbr;
    tmp->next = NULL;
    while (tmp2->next != NULL)
    {
        if (tmp2->next == NULL)
            break;
        tmp2 = tmp2->next;
    }
    tmp2->next = tmp;
}

void insert_new_list(variable_t **lista, variable_t **listb)
{
    variable_t *tmp = *lista;

    if (*lista == NULL)
        return;
    tmp->nbr = (*lista)->nbr;
    *lista = (*lista)->next;
    tmp->next = *listb;
    *listb = tmp;
}

void insert_first(variable_t **lista, variable_t **listb)
{
    variable_t *tmp = *listb;

    if (*listb == NULL)
        return;
    tmp->nbr = (*listb)->nbr;
    *listb = (*listb)->next;
    tmp->next = *lista;
    *lista = tmp;
}
