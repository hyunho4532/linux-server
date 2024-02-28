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
ssize_t write(int fd, const void *buf, size_t count);

if (ret == -1) {
   if (errno == EINTR)
  	goto start;
   if (errno == EAGAIN)
 
   else
     
}



**/

int main(void) {
    

    int fd;
    ssize_t ret;

    unsigned long word;
    const char *buf = "My ship is solid!";
    ssize_t nr;

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

    nr = white (fd, buf, strlen(buf));

    if (nr == -1) {
	printf("file is not write");
    }

    close(fd);

    return 0;
}

