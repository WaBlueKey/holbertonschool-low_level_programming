/* this function takes a character as parameter, which is supposed to be one of the /
   operator char (+, -, *, / or %) and returns a pointer to the right function that /
   corresponds to the operator char given as a parameter. */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char c))(int, int){
  int i;

  char sign[5] = { '+', '-', '*', '/', '%'};

  int (*funcs[5])(int, int);

  funcs[0] = op_add;
  funcs[1] = op_sub;
  funcs[2] = op_mul;
  funcs[3] = op_div;
  funcs[4] = op_mod;

  for(i = 0; i < sign[i]; i++){
    if(c == sign[i]){
      return funcs[i];
    }
  }
  return 0;
}
