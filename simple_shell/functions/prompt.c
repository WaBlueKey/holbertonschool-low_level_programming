#include <unistd.h>
#include "my_functions.h"

/* this function prints the prompt. */
void prompt(char *c)
{
  write(1, c, str_len(c));
}
