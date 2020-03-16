#include "holberton.h"
#include <stdlib.h>

/**
 * check_for_specifiers - checks if there is a valid format specifier
 * 
 *
 * 
 */
int (*check_spes(const char *format))(va_list)
{
	unsigned int i;
	output_o p[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}

/**
 * _printf
 * 
 *
 * Return
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, nbc = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			nbc++;
		}
		if (!format[i])
			return (nbc);
		f = check_spec(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			/* i += 2; 
			continue;
		}
		if (!format[i + 1])
			return (-1);
		/*_putchar(format[i]);
		nb++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;*/
	}
	va_end(valist);
	return (nbc);
}
