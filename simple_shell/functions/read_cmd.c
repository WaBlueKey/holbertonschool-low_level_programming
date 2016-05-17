#include "my_functions.h"
#include "../libshell/libshell.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#define BUFFER_SIZE 255

int read_cmd(char *path)
{
        int fd;
        char arguments[10000];
        size_t len;
        char *next_argument;

        fd = open(path, O_RDONLY);
        len = read(fd, arguments, sizeof (arguments));
        close (fd); /* close after reading. */
        arguments[len] = '\0';
        next_argument = arguments;

        while (next_argument < (arguments + len)) {
                prompt (next_argument);
                prompt("\n");
                next_argument += str_len(next_argument) + 1;
        }
        return(0);
}
