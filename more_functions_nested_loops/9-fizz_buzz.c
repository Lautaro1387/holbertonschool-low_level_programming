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
	else if (test % 5)
	{
		printf("Buzz");
		_putchar(32);
	}
	else if (test % 3 && test % 5)
	{
		printf("FizzBuzz");
		_putchar(32);
	}
}
}
