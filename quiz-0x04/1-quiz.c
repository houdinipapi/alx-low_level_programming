#include <stdio.h>
/**
*main - function output
*Return: 0
*/

int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		printf("%d", i % 2);
		i++;
	}
	return (0);
}
