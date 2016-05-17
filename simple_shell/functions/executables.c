#include "../libshell/libshell.h"
#include "my_functions.h"
#include <unistd.h>
#include <stdlib.h>

/* */
int executables(char **env, char **args)
{
        char *path;
        int status = 0;

        path ='\0';
        if(args[0][0] != '/')
                path = select_command(env, args[0]);
        else
                path = args[0];
        status = execve(path, args, env);
        if(status == -1) {
                prompt(args[0]);
                prompt(" is not a command\n");
        }
        return (status);
        free(path);
}
