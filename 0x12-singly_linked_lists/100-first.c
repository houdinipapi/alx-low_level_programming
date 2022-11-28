#include <stdio.h>
void myStartuFun(void)__attribute__ ((constructor));

/**
  * myStartupFun - Function that runs before main function
  */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
