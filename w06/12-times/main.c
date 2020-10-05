#include <stdio.h>
#include <stdlib.h>
#include <sys/times.h>
#include <limits.h>
#include <time.h>
#include <sys/types.h>

#ifndef CLK_TCK
	// gcc compiler uses CLOCKS_PER_SEC, not CLK_TCK
	#define CLK_TCK	CLOCKS_PER_SEC
#endif

int main(void) {
    int i;
    time_t t;
    struct tms mytms;
    clock_t t1, t2;

#ifdef DEBUG
	printf("CLK_TCK : %ld\n", CLK_TCK);
#endif

    if ((t1 = times(&mytms)) == -1) {
        perror("times 1");
        exit(1);
    }

    for (i = 0; i < INT_MAX; i++) {time(&t);}

    if ((t2 = times(&mytms)) == -1) {
        perror("times 2");
        exit(1);
    }
#ifdef DEBUG
	printf("t1 : %ld, t2 : %ld\n", (long int)t1, (long int)t2);
#endif
    printf("Real time : %.8f sec\n",(double)(t2 - t1) / CLK_TCK);
    printf("User time : %.8f sec\n",(double)mytms.tms_utime / CLK_TCK);
    printf("System time : %.8f sec\n",(double)mytms.tms_stime / CLK_TCK);

    return 0;
}
