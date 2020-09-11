/*
** EPITECH PROJECT, 2020
** lib_c
** File description:
** my_strdup
*/

#include <stdio.h> //lib qui sert pour le printf du main uniquement
#include <stdlib.h> //lib pour malloc

int my_strlen(char *str)
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++);

    return (i);
}

char *my_strdup(char *str)
{
    char *new = malloc(sizeof(char) * (my_strlen(str))+1);
    int i = 0;

    while (str[i] != '\0') {
        new[i] = str[i];
        i++;
    }
    new[i] = '\0';
    return (new);
}

int main(void)
{
    char *str = "Bonjour";
    char *new = my_strdup(str);

    printf("%s\n", new);
    return (0);
}