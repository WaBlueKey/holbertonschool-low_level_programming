int print_char(char c);

int main(void)
{
   int a[5] = { 0, 1, 2, 4, 1 };
   int b[5] = { 1, 6, 2, 2, 8 };
   int i;


   i = 4;
   while (i < 5 && i >= 0) /* While loop to accommodate the range of the array*/
   {
      int j = a[i] + b[i];
      print_char(j + '0');
      i--;

   }
   print_char('\n');
   return (0);
}
