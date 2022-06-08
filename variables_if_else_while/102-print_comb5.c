#include <stdio.h>
/**
 * main - Number
 * Return: finished
 */
int main(void)
{
	int n;
	int e;

	for (n = 0; n < 100; n++)
	{
		for (e = 0; e < 100; e++)
		{
			if (n < e)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(32);
				putchar((e / 10) + 48);
				putchar((e % 10) + 48);
				if (n != 98 || e != 99)
				{
					putchar (44);
					putchar (32);
				}
			}
		}
	}
	putchar (10);
	return (0);
}
