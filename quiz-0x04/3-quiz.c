#include <stdio.h>
/**
*main - function
*Return: 0
*/

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		i++;
		printf("%d", i / 2);
	}
	return (0);
}
