#include <stdlib.h>
#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(44);
			putchar(32);
		}
		if (n < 9)
		{
			putchar(n + 49);
			if (n != 8)
			{
				putchar(44);
				putchar(32);
			}
			if (n < 8)
			{
				putchar(n + 50);
				if (n != 7)
				{
					putchar(44);
					putchar(32);
				}
				if (n < 7)
				{
					putchar(n + 51);
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	return (0);
}
