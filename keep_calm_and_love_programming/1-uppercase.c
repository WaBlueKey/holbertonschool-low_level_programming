/* this program converts lowercase letters to uppercase.*/

char uppercase(char c) {
  
  for(; c > 96 && c < 123;) { /* in this step, we want to cover all ascii values of the lowercase letters. */
    c = c - 32; /* we will replace them with uppercase letters by subtracting the letter value in ascii by 32. */
  }
    return c;
}
