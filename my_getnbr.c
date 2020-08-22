/*
** EPITECH PROJECT, 2020
** lib_c
** File description:
** my_getnbr
*/

#include <stdio.h> //lib qui sert pour le printf du main uniquement

int my_getnbr(char const *src)
{
    int i = 0, nbr = 0, neg = 0;

    while (src[i] == '-' || src[i] == '+') {
        if (src[i] == '-')
            neg++;
        i++;
    }
    while (src[i] >= 48 && src[i] <= 57) {
        nbr = nbr * 10;
        nbr = nbr + (src[i] - 48);
        i++;
        if (nbr >= 2147483647 || nbr < 0)
            return (0);
    }
    if (neg % 2 != 0) {
        nbr = -nbr;
    }
    return (nbr);
}

int main(void)
{
    int result = 0;

    result = my_getnbr("42bonjour");
    printf("%d\n", result);
    return (0);
}