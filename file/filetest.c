#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
int open (const char *name, int flags);
int open (const char *name, int flags, mode_t mode);
int creat (const char *name, mode_t mode);
ssize_t read(int fd, void *buf, size_t len);
**/

int main(void) {
    
    int fd;

    ssize_t ret;
    unsigned long word;

    fd = open ("/c-example/file/test.txt", O_WRONLY | O_CREAT | O_EXCL);

    if (fd == -1) {
	printf("file is not open");
	return 1;	
    }

    while (len != 0 && (ret = read (fd, word, (unsigned long))) != 0) {
	if (ret == -1) {
	    if (errno == EINTR) 
		continue;

	    perror ("read");
	    break;
	}

	len -= ret;
	buf += ret;
    }


    close(fd);

    return 0;
}

