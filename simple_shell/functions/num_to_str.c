#include "my_functions.h"
#include <stdlib.h>
#include <unistd.h>
void swap(char *a, char *b);
void reverse(char str[], int length);

typedef int bool;
#define true 1
#define false 0

/* this function changes an interger to a string. */
char *int_to_str(int num, char *str)
{
        int i = 0;
        bool neg_num = false;

        if (num == 0) {
                str[i++] = '0';
                str[i] = '\0';
                return str;
        }
        if (num < 0) {
                neg_num = true;
                num = -num;
        }
        while (num != 0) {
                int re = num % 10;
                str[i++] = (re > 9)? (re - 10) + 'a' : re + '0';
                num = num/10;
        }
        if (neg_num) {
                str[i++] = '-';
        }
        str[i] = '\0';
        reverse(str, i);
        return str;
}

void swap(char *a, char *b)
{
        char c;
        c = *a;
        *a = *b;
        *b = c;
}
void reverse(char *str, int length)
{
        int start = 0;
        int end = length -1;
        while (start < end) {
                swap(&(str[start]), &(str[end]));
                start++;
                end--;
        }
}
