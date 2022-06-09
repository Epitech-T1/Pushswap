/*
** EPITECH PROJECT, 2022
** Tek1
** File description:
** utilities
*/

#include "../../include/my.h"

int my_len_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; i++);
    return (i);
}

void my_putchar(char c)
{
    write (1, &c, 1);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int signe = 1;
    long number = 0;
    int size = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            signe = signe * - 1;
        i = i + 1;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        if (size > 10)
            return (0);
        number = number * 10 + (str[i] - 48);
        i = i + 1;
        size = size + 1;
    }
    number = number * signe;
    if (number > 2147483647 || number < -2147483648)
        return (0);
    return (number);
}
