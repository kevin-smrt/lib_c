/*
** EPITECH PROJECT, 2020
** lib_c
** File description:
** my_strcmp
*/

#include <stdio.h> //lib qui sert pour le printf du main uniquement

int	my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
        i++;
    return (s1[i] - s2[i]);
}

int main(void)
{
    int result = 0;

    result = my_strcmp("Salut", "Salut");

    if (result == 0) {
        printf("Same str\n");
    } else
        printf("Not same str\n");

    return (0);
}