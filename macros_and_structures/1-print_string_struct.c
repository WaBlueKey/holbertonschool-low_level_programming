#include <stdio.h>
#include "str_struct.h"

/* used to test if 1-string_to_struct functions as expected. */
void print_string_struct(struct String *str) {

  printf("%s, %d\n", str->str, str->length);

}
