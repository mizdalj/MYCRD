#ifndef MY_H
#define MY_H
#include "my.h"
#endif

void search(char **tab, my_list *list)
{
    long long key = my_getnbr(tab[0]);
    free(tab);
    my_putll(my_search(key, list));
    my_putchar('\n');
}

void create(char **tab, my_list **list)
{
    my_push_to_list(my_getnbr((tab[0])), my_getnbr((tab[1])), list);
    tab = NULL;
    free(tab);
}

void delete(char **tab, my_list **list)
{
    long long key = my_getnbr(tab[0]);
    free(tab);
    my_putll(my_delete(key, list, list));
    my_putchar('\n');
}

void my_crd()
{
    my_list *list = NULL;
    char *line = NULL;
    size_t n = 0;
    char **tab;

    while(getline(&line, &n, stdin) != -1){
        tab = my_str_to_word_array(line);
        if (tab[1] == NULL) {
            search(tab, list);
        } else if ( *tab[1] == 68){ //68 correspond à 'D' en ASCII
            delete(tab, &list);
        } else {
            create(tab, &list);
        }
    }

}