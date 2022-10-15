#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - print the last digit of the number stored in the variable n
*
*Description: the output should be strings
*the output should end with a new line
*Return: 0
*/

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

/* this is my code */
if (1 > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
}

else if (l == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, l);
}

else
{
	printf("Last digit of %d is %d and is greater than 5 and not 0\n", n, l);
}

return (0);
}