/*
 * project directory: macros_and_structures
 * task #: 1
 * file name: 1-string_to_struct.c
 * file type: c
 * dependent files: 1-main.c, 1-print_string_struct.c, str_struct.h
 *
 *
 * this function stores a string and its length in a newly allocated structure,
 * and return the address of this structure. It includes:
 *    struct String {
 *       char *str;
 *       int length;
 *    };
 *
 *  by Zee Adams, May 2016.
 */

#include <stdlib.h>
#include "str_struct.h"
int str_length(char *s);

struct String *string_to_struct(char *str) {

  struct String *str_copy; /* created a pointer to structure. */

  str_copy = malloc(sizeof(struct String)); /* setting the size of str_copy. */
  if(str_copy == NULL) { /* in case of failure, return NULL. */
    return(NULL);
  }

  str_copy->length = str_length(str);
  /* set the element of length in str_copy by referring to the str_length
     function below. */
  str_copy->str = str;
  /* set the element of str in str_copy by referring to the string provided. */

  return str_copy;


}
/* function to get length of a given string. */
int str_length(char *s) {

  int i = 0; /* local variable to count the # of characters in the string.*/

  while (s[i] != '\0') { /* while *s doesn't equal NULL, continue count.*/
    i++; /* increment i by 1 in each iteration. */
  }
  return i; /* return the total of i once loop terminates. */
}
