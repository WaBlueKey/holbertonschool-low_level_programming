#include "my_functions.h"
#include <sys/stat.h>

/* Does the executable exist in the path? */
int exists(char *c)
{
        struct stat fileStat;

        if(lstat(c, &fileStat) == -1) {
                return 0;
        }
        return 1;
}
