#include "my_functions.h"

void print_combination_3(void){
 int i;
 int j;
 int k;

  i = 0;
  while(i < 10){

    j = i + 1;
    while(j != i && j < 10){

      k = j + 1;
      while(k != j && k < 10){
        print_char(48 + i);
        print_char(48 + j);
        print_char(48 + k);
        if(i < 7){
        print_char(44);
        print_char(32);
        }
        k++;
      }
      j++;
    }
    i++;
  }

}
