void print_number(int num);
int print_char(char c);

void print_array(int *a, int n){
  /* this function prints the array. */
  int b;

  if(n <= 0){
    print_char('\n');
  }
  for(b = 0; b < n; b++){
    if(b == (n-1)){
      print_number(*(a + b));
    } else {
      print_number(*(a + b));
      print_char(',');
      print_char(' ');
    }
  }
  print_char('\n');
}
/* this is a function to print the array elements.*/
void print_number(int num) {
  int newn=num;
  int power=10; 
  int printnum;
  if (num == 2147483647) {
    print_char('2');
    num = 147483647; }
  if (num == -2147483648) { /* special case for Int_Min to print.*/
    print_char('-');
    print_char('2');
    num = 147483648; }
  if (num == 0){
    print_char('0'); }  
  if (num < 0){
    num = num * -1;
    print_char('-'); } /* keepn -ve #s by printing '-' char manually. */
  newn = num;
  while (newn > 9){ /* loop to find the number to divide by to get digit. */
    newn = (newn / 10);
    power = power * 10; }
  power = power / 10;
  newn = num;
  while (newn > 0){ /* loop to print the digits. */
    printnum = newn / power;
    newn = newn % power;
    power = power / 10;
    print_char(printnum + '0'); } }
