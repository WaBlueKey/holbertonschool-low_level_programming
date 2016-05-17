#include "../libshell/libshell.h"
#include "my_functions.h"
#include <unistd.h>
#include <stdlib.h>

/* this function finds the full path of the input command. */
char *select_command(char **env , char *cmd)
{
        char **full_path;
        char *path;
        int i = 0;

        path = '\0';

        /* Create the path from the result of the env command. */
        for (; env[i]!= NULL; ++i) {
                if(str_ncomp(env[i], "PATH=", str_len("PATH=")) == 0) {
                        full_path = string_split(env[i],'=');
                        path = full_path[1];
                        full_path = string_split(path, ':');
                        break;
                }
        }
        /*  Select the executable from the path given. */
        for(; full_path[i] != NULL;i++) {
                path = concactenate(concactenate(full_path[i],"/"),cmd);
                if(exists(path)) {
                        return path;
                }
                path = '\0';
        }
        return path;
}
