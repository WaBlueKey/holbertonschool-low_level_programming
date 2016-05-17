#include "my_functions.h"

/* this funcitons compares two strings and uses length. */
int str_ncomp(char *s1, char *s2, int k)
{

        int len1;
        int len2;
        int x = 0;
        int i = 0;
        int n;

        len1 = str_len(s1);
        len2 = str_len(s2);

        if(len1 >= len2){
                n = len1;
        } else {
                n = len2;
        }

        if(k > n) {
                n = n;
        } else {
                n = k;
        }

        while(i < n) {
                if(s1[i] != s2[i]){
                        x = s1[i] - s2[i];
                        break;
                } else {
                        x = 0;
                }
                i++;
        }
        return (x);
}
