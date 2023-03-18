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
		putchar(n + 48); /* Print the first digit */
		if (n != 9) /* Print the comma and space separator */
		{
			putchar(44);
			putchar(32);
		}
		if (n < 9) /* Print the second digit */
		{
			putchar(n + 49);
			if (n != 8) /* Print the comma and space separator */
			{
				putchar(44);
				putchar(32);
			}
			if (n < 8) /* Print the third digit */
			{
				putchar(n + 50);
				if (n != 7) /* Print the comma and space separator */
				{
					putchar(44);
					putchar(32);
				}
				if (n < 7) /* Print the fourth digit */
				{
					putchar(n + 51);
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar("\n", n);
	return (0);
}
