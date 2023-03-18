#include <stdlib.h>
#include <time.h>
#include <stio.h>
/**
*main - function is determine if the number is postive, negative or zero. 
*
*return - function always return 0 if it works properly. 
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
