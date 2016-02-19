#include <stdio.h>

/* This program is meant to print Fizz for any multiple of 3, Buzz for any multiple of 5 and FizzBuzz for multiple of 3 & 5. The count is limited to 1 - 100. Note that each print statement below has an extra space. This is to make sure the words and numbers have spaces between them.*/

int main(void)
{
  int i;
  for (i = 1; i <= 100; i++) 
    {
      if (i % 3 == 0 && i % 5== 0) { /* if statement covers the multiple of 3 & 5. Using modulo to verify that remainder is 0. If condition is met, it should print FizzBuzz */
	printf("FizzBuzz ");
      }
      else if (i % 3 == 0) { /* first else if statement covers only multiples of 3. If condition is met, it should print Fizz.*/
	printf("Fizz ");
      }
      else if (i % 5 == 0) { /* second else if statement covers only multiples of 5. If condition is met, it should print Buzz.*/
	printf("Buzz ");
      }
      else { /* all remaining numbers outside of the above conditions will result in the printing of the number.*/
	printf("%d ", i);
      }
    }
  return(0);
}
