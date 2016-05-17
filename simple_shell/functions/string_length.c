/* this function returns the length of a string. */

int str_len(const char *s)
{
        int i = 0;

        while(s[i]) {
                i++;
        }
        return (i);
}
