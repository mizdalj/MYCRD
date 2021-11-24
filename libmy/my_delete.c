#ifndef MY_H
#define MY_H
#include "my.h"
#endif

void delete_node(my_list *previous_node, my_list *current) //pour supprimer on prend le premier à droite puis on parcourt vers la gauche jusqu'au bout, si le premier à droite existe pas on fait l'inverse
{
    my_list *replacing_node = current;
    if ( replacing_node->right != NULL ) { //Si le noeud à suppr a un droite on le prend
        previous_node = replacing_node;
        replacing_node = replacing_node->right;
        while ( replacing_node->left != NULL) { // puis on va au maximum à gauche pour récupérer le plus petit noeud
            previous_node = replacing_node;
            replacing_node = replacing_node->left;
        }
        current->key = replacing_node->key;
        current->data = replacing_node->data;
        if (previous_node->key == current->key && replacing_node->right != NULL) {
                previous_node->right = replacing_node->right;//si il a un voisin droite on le rattache au list right si c'est le premier noeud après list
        } else if (previous_node->key != current->key && replacing_node->right != NULL) {
                previous_node->left = replacing_node->right;//sinon on le rattache au previous left
        }
        replacing_node = NULL;
        free(previous_node);
        free(replacing_node);
    } else if (replacing_node->left != NULL) { //si il a pas de voisin de droite on fait la même en mirroir
        previous_node = replacing_node;
        replacing_node = replacing_node->left;
        while ( replacing_node->right != NULL) {
            previous_node = replacing_node;
            replacing_node = replacing_node->right;
        }
        current->key = replacing_node->key;
        current->data = replacing_node->data;
        if (previous_node->key == current->key && replacing_node->left != NULL) {
                previous_node->left = replacing_node->left;
        } else if (previous_node->key != current->key && replacing_node->left != NULL) {
                previous_node->right = replacing_node->left;
        }
        replacing_node = NULL;
        free(replacing_node);
        free(previous_node);
    } else {
        free(current);
    }
}



long long my_delete(long long key,my_list **previous, my_list **list)
{
    if((*list) == NULL) return -1;

    if (key == (*list)->key){
        long long value = (*list)->data;
        delete_node(*previous, *list);
        return value;
    } else if ((*list)->key > key){//on l'implémente à gauche
        if ((*list)->left == NULL){
            return -1;
        } else {
            my_delete(key, list, &((*list)->left));
        }
    } else if ((*list)->key < key){ //a droite si la clé est plus grande
        if ((*list)->right == NULL){
            return -1;
        } else {
            my_delete(key, list, &((*list)->right));
        }
    } else {
        return -1;
    }
}