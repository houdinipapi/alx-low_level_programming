#include <stdio.h>
/**
*main - function
*Return: 0
*/

int main(void)
{
	int i;

	i = -9;
	while (i < 0)
	{
		printf("%d", -i);
		i++;
	}
	return (0);
}
