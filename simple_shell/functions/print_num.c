#include "my_functions.h"

/* this function prints numbers. */
void print_number(int n)
{
        if (n > 10)
        print_number(n / 10);
        print_char(n % 10 + 48);
}
