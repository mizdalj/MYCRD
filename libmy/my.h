#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct linked_list{
    long long key;
    long long data;
    struct linked_list *right;
    struct linked_list *left;
}my_list;

void my_push_to_list(long long key, long long value, my_list **list);
void my_sort_list(my_list **begin);
void my_crd();
long long my_delete(long long key, my_list **previous, my_list **list);
void my_putchar(char c);
void my_putstr(const char *str);
char *my_readline(void);
long long my_getnbr(const char *str);
void my_putnbr(int nbr);
void my_putll(long long nbr);
long long my_search(long long key, my_list *list);
char **my_str_to_word_array(const char *str);
