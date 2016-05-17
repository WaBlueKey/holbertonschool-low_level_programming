#include "my_functions.h"
#include <stdlib.h>

/* the function creates the path. */
void environment(int pid)
{
        char *path;
        char str[100];

        int_to_str(pid,str);
        path = concactenate("/proc/",str);
        path = concactenate(path,"/environ");
        read_cmd(path);
}
