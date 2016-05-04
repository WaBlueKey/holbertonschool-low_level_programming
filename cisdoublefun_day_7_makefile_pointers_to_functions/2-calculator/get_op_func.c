/* this program performs simple operations that take a character as parameter,
which should include operator char (+, -, *, / or %) and returns a pointer to
the correct function that corresponds to the operator char given as a
parameter. */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char c))(int, int){

  int i = 0;

  char oper[5] = { '+', '-', '*', '/', '%'};

  int (*func[5])(int, int);

  func[0] = op_add;
  func[1] = op_sub;
  func[2] = op_mul;
  func[3] = op_div;
  func[4] = op_mod;

  while(i < oper[i]) {
    if(c == oper[i]) {
      return func[i];
    }
    i++;
  }
  return (0);
}
