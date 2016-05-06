#include "str_struct.h"

struct String *string_to_struct(char *str);
void print_string_struct(struct String *str);

int main(void)
{
  struct String *str;

  str = string_to_struct("Holberton");
  print_string_struct(str);
  str = string_to_struct("C is fun for everyone, especially Gloria and I who have been wondering why things get so complicated when all we want to do is make mad money not on the side but legit type money. You know what I'm saying. I mean it's not that serious.");
  print_string_struct(str);
  str = string_to_struct("");
  print_string_struct(str);
  return (0);
}
