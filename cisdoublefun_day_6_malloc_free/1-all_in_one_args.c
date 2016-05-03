/* this function concatenates all command line arguments.*/
#include <stdlib.h>
#include <unistd.h>

int s_length(int ac, char **av);
int print_char(char c);
char *string_concat(char *dest, char *src);

char *all_in_one_args(int ac, char **av) {


  int k = 0;
  int length;
  char *string;
  char nl[2] = {'\n', '\0'};

  length = s_length(ac, av);

  string = malloc((length * 4) * sizeof(char));
  if (string == NULL) {
          return (NULL);
     }
  while(k < ac) {
    string_concat(string, av[k]);
    string_concat(string, nl);
    k++;
  }
  return string;
}

int s_length(int ac, char **av) {

  int i = 0;
  int j;
  int sum = 0;
/* while loop to find the length of strings in CL arguments. */
  while(ac > 0) {
    j = 0;
    while(*(av[i] + j) != '\0') {
      j++;
    }
    sum += j;
    i++;
    ac--;
  }
  return sum;
}

char *string_concat(char *dest, char *src) {

  int i = 0;
  int j = 0;

  while(dest[i] != '\0') {
    i++;
  }
  while(src[j] != '\0') {
    dest[i] = src[j];
    i++;
    j++;
  }
  return dest;
}

int print_char(char c)
{
      return (write(1, &c, 1));
}
