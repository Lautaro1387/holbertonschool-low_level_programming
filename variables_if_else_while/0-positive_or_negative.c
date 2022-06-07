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
printf ("%i\nis positive", n);
}
if (n == 0)
{
printf("%i\nis zero", n);
}
if (n < 0) 
{
printf ("%i\nis negative", n);
}
return (0);
}
