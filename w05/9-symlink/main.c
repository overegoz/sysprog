#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void) {
    symlink("unix.txt", "unix.sym"); // 성공하면 0을, 실패하면 -1을 리턴

    return 0;
}

