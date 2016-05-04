
char lowercase(char c) {
  
  for(; c >= 'A' && c <= 'Z';) { /* in this step, we want to cover all the uppercase letters. */
    c = c + 32; /* we will replace them with lowercase letters by adding the letter value in ascii by 32. */
  }
  return c;
}
