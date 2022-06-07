#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - hola
 * Return: cuchau
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf ("%iis positive\n", n);
}
if (n == 0)
{
printf("%iis zero\n", n);
}
if (n < 0) 
{
printf ("%iis negative\n", n);
}
return (0);
}
