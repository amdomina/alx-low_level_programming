#include <stdio.h>

/**
* main - causes an infinite loop
*
* Return: 0
*/

int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}

	printf("infinite loop avoided! \\o/\n");

	return (0);
}
