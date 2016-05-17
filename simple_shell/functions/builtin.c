#include "my_functions.h"
#include <stdlib.h>

/* function to accommodate built-in commands. */
int builtin_commands(char **args, __attribute__((unused)) int status, int pid)
{
        if(str_ncomp(args[0], "env", str_len("env")) == 0) {
                environment(pid);
                return 1;
        }
        if(str_ncomp(args[0], "exit", str_len("exit")) == 0) {
                exit(EXIT_SUCCESS);
        }
        else if((str_ncomp(args[0], "echo", str_len("echo")) == 0) && (str_ncomp(args[1], "$?", str_len("$?")) == 0)) {
                print_number(status);
                prompt("\n");
                return 1;
        }
        return 0;
}
