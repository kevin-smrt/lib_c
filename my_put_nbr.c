/*
** EPITECH PROJECT, 2019
** lib_c
** File description:
** my_put_nbr
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb < 10) {
        my_putchar(nb + 48);
    }
    else {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
    return (nb);
}

int main(void)
{
    my_put_nbr(42);
    return (0);
}