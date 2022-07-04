#include "variadic_functions.h"
/**
* print_int - Function
* @list: List
* Return: Void
*/
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_char - Function
 * @list: List
 * Return: Void
*/
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
* print_float - Function.
* @list: List
* Return: Void
*/
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
* print_string - Function.
* @list: List.
* Return: Void
*/
void print_string(va_list list)
{
	char *string;

	string = va_arg(list, char *);
	if (string == NULL)
	{
		printf("(nil)");
	}
	printf("%s", string);
}

/**
 * print_all - Function.
 * @format: Const element.
 * Return: Void.
*/
void print_all(const char * const format, ...)
{
	int i, a;
	va_list list;
	char *z = "";

	alls prints[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(list, format);
	while (format != NULL)
	{
		a = 0;
		while (prints[a].letters != '\0')
		{
			if (prints[a].letters == format[i])
			{
			printf("%s", z);
			prints[a].f(list);
			z = ", ";
			}
		a++;
		}
	i++;
	}
	va_end(list);
	printf("\n");
}
