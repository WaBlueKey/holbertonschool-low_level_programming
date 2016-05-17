#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
#include "libshell/libshell.h"
#include "functions/my_functions.h"

int main(__attribute__((unused))int argc, __attribute__((unused))char **argv, char **env)
{
        char *command_line;
        char **arguments;
        int status = 0;
        pid_t pid;

        while(1) {
                prompt("USS Enterprise$ ");
                command_line = read_line(0);
                arguments = string_split(command_line, ' ');
                free(command_line);

                if (builtin_commands(arguments, status, getpid())) {
                	continue;
                }
                if((pid = fork()) == -1) {
                	perror("There is a fork error");
                	exit(EXIT_FAILURE); /* EXIT_FAILURE similar to value 1. */
        	}
                else if(pid  == 0) {
                	return executables(env, arguments);
        	}
                else {
                	wait(&status);
        	}
        }
        free(arguments);
        return (0);
}
