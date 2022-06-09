/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** push
*/

#ifndef PUSH_H_
#define PUSH_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct variable {
    int nbr;
    struct variable *next;
} variable_t;

typedef struct list {
    variable_t *l_a;
    variable_t *l_b;
} list_t;

int my_strlen(char const *str);
int my_getnbr(char const *str);
void pushswap(list_t *list);
void insert_end(variable_t **new_end, list_t *list);
int last(list_t *list);
int position(list_t *list, int pos2);
void permutation_l_a(list_t *list, int pos1, int pos2);
void permutation_l_b(list_t *list, int pos1, int pos2);
void insert_new_list(variable_t **lista, variable_t **listb);
void insert_first(variable_t **lista, variable_t **listb);
void delete_lb(list_t *list);

#endif /* !PUSH_H_ */
