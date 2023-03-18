#include <stdio.h>
/**
* main - main function start here
*
* Return: return 0 (success)
*/
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				putchar(',');
				putchar(' ');
				for (l = k + 1; l < 10; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					putchar(l + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
