#include "my_functions.h"
#include <stdlib.h>

/* this function concactenates two strings. */
char *concactenate(char *s1, char *s2)
{
        int len1;
        int len2;
        int i = 0;
        int j = 0;
        char *s;

        len1 = str_len(s1);
        len2= str_len(s2);
        s = malloc(sizeof(*s) * (len1 + len2 + 1) );

        if (s == NULL){
                return ( NULL);

        } else {
                while(i < len1){
                        s[i]= s1[i];
                        i++;
                }
                while(j < len2){
                        s[i] = s2[j];
                        i++;
                        j++;
                }
                s[i] = '\0';
        }
        return (s);
}
