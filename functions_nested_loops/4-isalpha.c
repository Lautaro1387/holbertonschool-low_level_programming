#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Checks for alphabetic character.
 * @c: Mi check.
 * Return: return 1 if c is a let,low,upper else return 0.
 */
int _isalpha(int c)
{
	if (c >= 'c' && c <= 'C')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
