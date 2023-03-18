#include <stdio.h>
/**
  * main -the programe  begin in here
  *
  *Return: return 0 (success)
  */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		ch = i + '0';
		putchar(ch);
	}
	for (i = 0; i < 6; i++)
	{
		ch = i + 'a';
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
