/*
 * project directory: macros_and_structures
 * task #: 3
 * file name: 3-free_string_struct.c
 * file type: c
 * dependent files:  3-main.c, 1-string_to_struct.c, str_struct.h
 * compiled using: gcc -o 3-free_string_struct -Wall -Wextra -Werror -pedantic 3-main.c 1-string_to_struct.c 3-free_string_struct.c
 *
 *
 * this function frees a struct String.
 *
 *  by Zee Adams, May 2016.
 */

#include <stdlib.h>
#include "str_struct.h"

void free_string_struct(struct String *str) {

  free(str); /* function to deallocate the block of memory str points to. */

}
