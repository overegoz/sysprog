#include <stdlib.h>
#include <stdio.h>

int main(void) {
   int ret;
   ret = system("ps -ef | grep han > han.txt");
   printf("Return Value : %d\n", ret);

   return 0;
}

