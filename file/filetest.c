#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
int open (const char *name, int flags);
int open (const char *name, int flags, mode_t mode);
**/

int main(void) {
    
    int fd;

    fd = open ("/c-example/file/test.txt", O_WRONLY | O_CREAT | O_EXCL);

    if (fd == -1) {
	printf("file is not open");
	return 1;	
    }

    printf("%d\n", fd);

    close(fd);

    return 0;
}

