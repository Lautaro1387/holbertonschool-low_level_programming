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
return("is positive");
}
elif (n = 0)
{
return("is zero");
}
else (n < 0) 
{
return("is negative");
}
return (0);
}