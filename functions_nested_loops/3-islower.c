#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks for lowercase character.
 * @c: Tu check
 * Return: 1 if c and 0 otherwise.
 **/
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
