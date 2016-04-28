#include <stdio.h>
#include <string.h>
int print_char(char c);
char *rev_string(char *);
int count(char *str);

int main(void)
{
     char *s;

     s = strdup("Holberton");
     printf("%s\n", s);
     s = rev_string(s);
     printf("%s\n", s);
     return (0);
}
