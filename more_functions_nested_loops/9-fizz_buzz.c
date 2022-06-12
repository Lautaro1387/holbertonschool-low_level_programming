#include "main.h"
#include <stdio.h>
/**
 * 
 */
void Fizz_buzz(int test)
{
for (test = 0; test <= 100; test++)
{
	if (test % 3)
	{
		printf("Fizz");
		_putchar(32);
	}
	else if (test % 5 == 0)
	{
		printf("Buzz");
		_putchar(32);
	}
	else if (test % 15 == 0)
	{
		printf("FizzBuzz");
		_putchar(32);
	}
	if (test != 100)
	{
		printf(" ");
	}
}
}
