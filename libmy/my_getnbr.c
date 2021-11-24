/*
** ETNA PROJECT, 2021
** First Program in C
** File description:
** 		Function that parses a number from a string representation taken as parameter and returns it
*/

#ifndef MY_H
#define MY_H
#include "my.h"
#endif

long long my_getnbr(const char *str){

    long long n = 0;
    size_t i = 0;
    while (str[i] && str[i] != '\n')
    {
        n = n * 10;
        n = n + (str[i] - 48);
        i++;
    }
    return (n);
}