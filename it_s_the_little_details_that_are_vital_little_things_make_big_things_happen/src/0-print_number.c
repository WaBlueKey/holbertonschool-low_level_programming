#include "../inc/my_functions.h"
void print_number(int n){ /* function prints the numbers without stdio.h. */
  int newn=n; 
  int power=10; 
  int printnum;
  if (n == 2147483647) {
    print_char('2');
    n = 147483647; }
  if (n == -2147483648) { /* special case for Int_Min to print.*/
    print_char('-');
    print_char('2');
    n = 147483648; }
  if (n == 0){
    print_char('0'); }  
  if (n < 0){
    n = n * -1;
    print_char('-'); } /* keepn -ve #s by printing '-' char manually. */
  newn = n;
  while (newn > 9){ /* loop to find the number to divide by to get digit. */
    newn = (newn / 10);
    power = power * 10; }
  power = power / 10;
  newn = n;
  while (newn > 0){ /* loop to print the digits. */
    printnum = newn / power;
    newn = newn % power;
    power = power / 10;
    print_char(printnum + '0'); } }
