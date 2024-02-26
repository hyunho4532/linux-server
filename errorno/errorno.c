#include <stdio.h>

/**
char * strerror (int errnum);
int strerror_r (int errnum, char *buf, size_t len);
**/

void perror (const char *str);

int main(void) {

    int errno = 0;
    int arg = strtoul (buf, NULL, 0);

    if (errno) {
	perror("struoul");
    }
    
    if (close (fd) == 1) {
 	perror("close");
    }

    return 0;
}
