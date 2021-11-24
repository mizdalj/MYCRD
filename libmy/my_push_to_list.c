#ifndef MY_H
#define MY_H
#include "my.h"
#endif

void create_node(long long key, long long value, my_list **list)
{
    my_list *new = malloc (sizeof(my_list));
    new->key = key;
    new->data = value;
    new->left = NULL;
    new->right = NULL;

    (*list) = new;
    my_putll(new->key);
    my_putchar('\n');
}

void replace_node(long long value, my_list *list)
{
    list->data = value;
    my_putll(list->key);
    my_putchar('\n');
}

void my_push_to_list(long long key, long long value, my_list **list)
{
    if (list == NULL || (*list) == NULL) { //si il n'y a pas encore de noeud on crée le premier
        create_node(key, value, list);
    } else if ((*list)->key == key) { //ou alors on remplace le noeud si la clé est la même
        replace_node(value, *list);
    } else if ((*list)->key > key) {//on l'implémente à gauche
        if ((*list)->left == NULL) {
            create_node(key, value, &((*list)->left));
        } else {
            my_push_to_list(key, value, &((*list)->left));
        }
    } else if ((*list)->key < key) { //a droite
        if ((*list)->right == NULL) {
            create_node(key, value, &((*list)->right));
        } else {
            my_push_to_list(key, value, &((*list)->right));
        }
    } else {
        return;
    }
}