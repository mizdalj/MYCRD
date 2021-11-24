/*
** ETNA PROJECT, 2021
** Pointers and arrays
** File description:
** 		Function that displays, one-by-one, the characters of a string.
**      The address of the string's first character will be found in the pointer passed as a parameter to the function.
*/

#ifndef MY_H
#define MY_H
#include "my.h"
#endif

void my_putstr(const char *str){

    int i = 0;
    while (*(str+i) != '\0'){
        my_putchar((char)(*(str+i)));
        i++;
    }
}
