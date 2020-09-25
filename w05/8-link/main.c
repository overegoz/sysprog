#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(void) {
    struct stat buf;

    stat("unix.txt", &buf);
    printf("Before Link Count = %d\n", (int)buf.st_nlink);

    link("unix.txt", "unix.ln"); // 성공하면 0을, 실패하면 -1을 리턴

    stat("unix.txt", &buf);
    printf("After Link Count = %d\n", (int)buf.st_nlink);

    return 0;
}

