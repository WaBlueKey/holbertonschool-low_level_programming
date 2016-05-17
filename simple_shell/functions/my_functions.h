/*
 * Functions in main
 * =================
 */
int builtin_commands(char **args, int status,int pid);
void environment(int pid);
char *select_command(char **env, char *cmd);
int executables(char **env, char **argv);
int exists(char *s);

/*
 * Functions that handle printing to the console
 * =============================================
 */
void prompt(char *s);
void print_number(int);
int print_char(char);
int read_cmd(char *path);

/*
 * Functions that manipulate strings
 * =================================
 */
char *concactenate(char * dest,char *src);
int str_len(const char *s);
int str_ncomp( char *s1, char*s2, int k);
void reverse(char str[], int length);
char *int_to_str(int num, char* str);
void swap(char *a, char *b);
