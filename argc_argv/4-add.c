#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function.
 * @argc: Element.
 * @argv: Pointer element.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, j, num1, num2;

	if (argv[1])
	{
	for (i = 1; i < argc; i++)
	{
		num1 = 0;
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] >= 48 && argv[i][j] <= 57)
			{
				num1 = num1 * 10;
				num1 = num1 + (argv[i][j] - '0');
			} else
			{
				printf("Error\n");
				return (1);
			}
		}
		num2 = num2 + num1;
	}
	printf("%d\n", num2);
	}
	else
	{
	printf("%d\n", 0);
	}
	return (0);
}
