#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Function that prints the chessboard.
 * @a: Pointer element.
 */
void print_chessboard(char (*a)[8])
{
	int b;

	for (b = 0; a[b] != '\0'; b++)
	{
		if (a[b] == 0)
		{
			a[b] = a[8];
		}
	}
}
