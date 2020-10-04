** SRC **
https://www.ics.com/blog/explore-memory-and-resource-leak-detection-tools


*************************
** to install valgrind **
*************************
$ sudo apt update
$ sudo apt install valgrind

*********************
** Sample programs **
*********************
1) malloc-free.c/exe : malloc then free the space
2) malloc-nofree.c/exe : malloc, then exit without freeing the space

****************
** How to run **
****************
1) valgrind --leak-check=full ./malloc-free.exe
2) valgrind --leak-check-full ./malloc-nofree.exe

******************************
** Result : malloc-free.exe **
******************************
...
...
ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
==> (since there's no mem leak) no memory leak is detected.

********************************
** Result : malloc-nofree.exe **
********************************
...
...
ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
==> memory leakage is detected!

# END OF FILE
