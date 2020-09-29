#include <stdlib.h>
#include <stdio.h>

int main(void) {
    FILE *rfp, *wfp;
    int c;
	int counter = 0;

    if ((rfp = fopen("unix.txt", "r")) == NULL) {
        perror("fopen: unix.txt"); exit(1);
    }
    while ((c = fgetc(rfp)) != EOF) 
        printf("%d : %c\n", counter++, c);
    
    fclose(rfp);

    return 0;
}

