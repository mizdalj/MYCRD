#ifndef MY_H
#define MY_H
#include "my.h"
#endif

long long my_search(long long key, my_list *list)
{
    if(list == NULL) return -1;

    if (key == list->key){
        return list->data;
    } else if (list->key > key){//on l'implémente à gauche
        if (list->left == NULL){
            return -1;
        } else {
            return my_search(key, list->left);
        }
    } else if (list->key < key){ //a droite
        if (list->right == NULL){
            return -1;
        } else {
            return my_search(key, list->right);
        }
    } else {
        return -1;
    }
}