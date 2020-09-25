#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    if (mkdir("Hallym", 0755) == -1) {
        perror("Hallym");
        exit(1);
    }

    if (mkdir("software", 0755) == -1) {
        perror("software");
        exit(1);
    }

    if (rename("Hallym", "HallymUniv") == -1) {
        perror("Hallym");
        exit(1);
}

    if (rmdir("software") == -1) {
        perror("software");
        exit(1);
    }

    return 0;
}

