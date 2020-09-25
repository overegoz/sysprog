#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    struct stat buf;
    int fd;  
    fd = open("unix.txt", O_RDONLY);
    if( fd == -1 ) {
        perror("open: unix.txt");
        exit(1);
    }
	fstat(fd, &buf);
    printf("Inode = %d\n", (int)buf.st_ino);
    printf("UID = %d\n",   (int)buf.st_uid);

    return 0;
}

