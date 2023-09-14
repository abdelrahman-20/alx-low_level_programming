#include "variadic_functions.h"

/**
 * format_char - A Function
 * @separator: The Separator
 * @list: The Parameter To Print
*/

void format_char(char *separator, va_list list)
{
	printf("%s%c", separator, va_arg(list, int));
}

/**
 * format_int - A Function
 * @separator: The Separator
 * @list: The Parameter To Print
*/

void format_int(char *separator, va_list list)
{
	printf("%s%d", separator, va_arg(list, int));
}

/**
 * format_float - A Function
 * @separator: The Separator
 * @list: The Parameter To Print
*/

void format_float(char *separator, va_list list)
{
	printf("%s%f", separator, va_arg(list, double));
}

/**
 * format_string - A Function
 * @separator: The Separator
 * @list: The Parameter To Print
*/

void format_string(char *separator, va_list list)
{
	char *str = va_arg(list, char *);

	switch ((int)(!str))
	{
		case 1:
			str = "(nil)";
	}

	printf("%s%s", separator, str);
}

/**
 * print_all - A General Function To Print
 * @format: The Foramt of Printed String
*/

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *sep = "";
	va_list list;

	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[i])
	{
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
