#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
int a, b, c;
int largest;

int largest = largest_number(a, b, c);
if (a >= b && a >= c)
{
printf("%d is the largest number\n", largest);
}
if (b >= a && b >= c)
{
printf("%d is the largest number\n", largest);
}
if (c >= a && c >= b)
{
printf("%d is the largest number\n", largest);
}
return (0);
}
