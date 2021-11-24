/*
** ETNA PROJECT, 2021
** First Program in C
** File description:
** 		Function that displays the number given as a parameter. It displays all the possible values of an int.
*/
#ifndef MY_H
#define MY_H
#include "my.h"
#endif


void my_putnbr(int nbr)
{
    if (nbr<0) {
        nbr=nbr*(-1);
        my_putchar('-');
        my_putnbr(nbr);
    } else {
        char character = (char)((nbr % 10) + 48);
        if (nbr>=10) my_putnbr(nbr/10);
        my_putchar(character);
    }
}

void my_putll(long long nbr)
{
    if (nbr<0) {
        nbr=nbr*(-1);
        my_putchar('-');
        my_putll(nbr);
    } else {
        char character = (char)((nbr % 10) + 48);
        if (nbr>=10) my_putll(nbr/10);
        my_putchar(character);
    }
}
