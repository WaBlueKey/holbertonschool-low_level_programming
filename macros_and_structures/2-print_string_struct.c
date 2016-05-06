/*
 * project directory: macros_and_structures
 * task #: 2
 * file name: 2-print_string_struct.c
 * file type: c
 * dependent files:  2-main.c, 1-string_to_struct.c, str_struct.h, print_char.c
 * compiled using: gcc -o 2-print_string_struct -Wall -Wextra -Werror -pedantic 1-string_to_struct.c 2-print_string_struct.c 2-main.c print_char.c && ./2-print_string_struct
 *
 *
 * this function prints the contents of struct String.
 *
 *  by Zee Adams, May 2016.
 */

#include "str_struct.h"
#include <stdio.h>
int print_char(char c); /* print_char prototype since printf is not used. */
void print_string(char *str); /* prototype to print the string. */
void print_number(int n); /* prototype to print the number. */


void print_string_struct(struct String *str) {

  print_string(str->str); /* call print_string func to print given string.*/
  print_char(','); /* required to separate string and string length ouput. */
  print_char(' '); /* required to separate string and string length ouput. */
  print_number(str->length); /* call print_number func to print string length.*/
  print_char('\n'); /* return a new line after each string. */
}

/* this function prints the characters of the string instead of printf. */
void print_string(char *str) {
  int i = 0; /* variable local to this function to count the characters. */

  while(str[i] != '\0') { /* loop through string until NULL terminator. */
    print_char(str[i]); /* print each character as you increment using i. */
    i++; /* increment i to increase value of i. */
  }
}
/* this function prints number using print_char instead of printf. */
void print_number(int n){

  int newn = n;
  /* new local variable = to given number (n) to not change value of n.*/
  int power=10;
  /* variable power used to assist in printing the digits since system
  considers them characters and not digits when printing without printf. */
  int printnum; /* local variable used to print the numbers. */

  if (n == 0){ /* special case if n = 0, print 0. */
    print_char('0');
  }

  newn = n; /* reinitialize newn to given number (n) for next loop. */

  while (newn > 9){ /* loop to increment var power. */
    newn = (newn / 10); /* divide the number by 10. */
    power = power * 10; /* increment power by 10. */
  }

  power = power / 10; /* decrement power by 10 for next loop.*/
  newn = n; /* reinitialize newn to given number (n) for next loop. */

  while (newn > 0){ /* loop to print the first number of each iteration. */
    printnum = newn / power;
    /* printnum takes the given number and divides it by the new value of power.
     * for example if the number to print is 254, the first iteration would be
     * printnum = 254 / 100
     * printnum = 2 (since it is not a floating number)
     */
    newn = newn % power;
    /* newn must now return the remaining digits after the first digit was
       printed. For example, 254 % 100 = 54 (as a remainder). Now newn = 54. */
    power = power / 10; /* decrement power for next iteration of loop. */
    print_char(printnum + '0');
    /* print the value of printnum for each iteration. Using the above example
     * newn = 254, first iteration the number 2 is printed, second iteration
     * the number 5 is printed, and third and final iteration the number 4 is
     * printed.
     */
  }
}
