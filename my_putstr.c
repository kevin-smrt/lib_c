/*
** EPITECH PROJECT, 2020
** lib_c
** File description:
** my_putstr
*/

#include <unistd.h>

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    my_putstr("oui salut\n");
    return (0);
}