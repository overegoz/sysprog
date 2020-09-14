#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a,b;
	printf("Print-Before\n");
#ifdef DEBUG
	printf("Print-Debug Messages...\n");
#endif
	printf("Print-After\n");
	return 0;
}
