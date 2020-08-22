/*
** EPITECH PROJECT, 2020
** lib_c
** File description:
** my_strlen
*/

#include <stdio.h> //lib qui sert pour le printf du main uniquement

int my_strlen(char *str)
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++);

    return (i);
}

int main(void)
{
    int i = my_strlen("Bonjour à tous !");
    printf("%d\n", i);
    return (0);
}