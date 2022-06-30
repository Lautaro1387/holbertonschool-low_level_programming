#include "function_pointers.h"
/**
 * print_name - Function.
 * @name: Pointer element.
 * @f: Pointer function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
	(*f)(name);
	}
}
