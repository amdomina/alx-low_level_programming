#include <stdio.h>
/**
* main - the programe begin here
*
* Return: return 0 (success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; i < 100; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i != 99 && j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
