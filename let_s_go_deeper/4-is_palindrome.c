/* this function returns 1 if a string is a palindrome & 0 if not. */

int length(char *str, int len){
  if( *(str+len) == 0 ) {
    return len;
  }
    return length(str, len + 1);
}

int palindrome_check(char *s, int len, int x)
{
  if(x >= len) {
    return 1;
  }
  if(s[x] != s[len - x - 1]) {
    return 0;
  }
  return palindrome_check(s, len, x + 1);
}  

int is_palindrome(char *s)
{  
  int str_len;  
  str_len = length(s, 0);
  return palindrome_check(s, str_len ,0);
}
