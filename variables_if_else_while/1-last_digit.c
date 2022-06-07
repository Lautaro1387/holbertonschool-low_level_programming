#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program will assign a random number to the variable n each time it is executed.
 * Return: return varible n
 */
int main(void)
{
int n;
int d;
srand(time(0));
n = rand() - RAND_MAX / 2;
d = rand() % 10;
if (n > 5)
{
	printf("Last digit of %i and %i is greater than 5\n", n, d);
}
if (n == 0)
{
	printf("Last digit of %i is %i and is 0\n", n, d);
}
if ((n < 6) != 0)
{
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, d);
}
return (0);
}
