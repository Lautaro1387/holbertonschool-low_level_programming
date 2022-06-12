#include "main.h"
#include <stdio.h>
/**
 * main - Test the 1 to 100.
 * Return: 0.
 */
int main(void)
{
int test;

for (test = 1; test <= 100; test++)
{
	if (test % 3 == 0 && test % 5 == 0)
	{
	printf("FizzBuzz");
	}
	else if (test % 3 == 0)
	{
		printf("Fizz");
	}
	else if (test % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", test);
	}
if (test != 100)
{
	printf(" ");
}
}
printf("\n");
return (0);
}
