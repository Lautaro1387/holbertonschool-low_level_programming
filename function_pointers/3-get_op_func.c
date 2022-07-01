#include "3-calc.h"
/**
 * get_op_func - Function.
 * @s: Pointer element.
 * Return: The function that corresponds to the operator given as a parameter.
 */
/** 1 if, 1 while */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_div},
	{NULL, NULL}
	};
	int i = 0;

	while (i <= 4 && ops[i].op[0] != s[0])
	{
		i++;
	}
	if (i > 4 || s[1])
	{
		printf("Error\n");
		exit(99);
	}
	return (ops[i].f);
}
