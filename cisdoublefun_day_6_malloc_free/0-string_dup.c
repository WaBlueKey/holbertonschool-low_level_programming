/* this function returns a pointer to a newly allocated space in memory,
 which contains a copy of the string given as a parameter.*/

#include <stdlib.h>

char *string_dup(char *str) {

  char *s;
  int i = 0;

  while(*(str + i) != '\0') {
    i++;
  }
  s = malloc((i + 1) * sizeof(char));
  if(s == NULL) {
    return (NULL);
  }
  int j = 0;
  while(i > 0) {
    s[j] = str[j];
    j++;
    i--;
  }

  return s;
}
