#ifndef MY_H
#define MY_H
#include "my.h"
#endif

char **my_str_to_word_array(const char *str)
{
    char **tab = NULL;
    int i=0;
    int j=0;
    int k=0;
    int size=0;
    int col=0;

   for (i=0 ; str[i] != '\0' ; i++)
   {
       if (str[i==' '])
        size++;
   }
   tab=malloc(sizeof(char*)*(size+1) +1);
   size=0;
   if (tab==NULL) {
      exit (0);
    }

    for (i=0 ; str[i] != '\0' ; i++) {

        size++;

       if (str[i] == ' ' || str[i+1] == '\0') {

          tab[col]=malloc(sizeof(char*)*(size+1));

          size =0;

          col++;
       }
   }
    j=0;
    for ( i=0 ; str[i] != '\0' ; i++) {
        if (str[i]!=' ') {
            tab[j][k++]= str[i];
        }
        else {
            tab[j][k++]='\0';
            j++;
            k=0;
        }
    }
return (tab);
}