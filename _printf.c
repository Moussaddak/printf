#include <stdarg.h>
#include "holberton.h"
/**
 *_printf - function that produces output according to a format
 *@format: a string to be displayed in out
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, flag, k;
	char special_char  = '%';
	list lst[] = {
		{'c', print_char},
		{'s', print_string}
	};
	va_list ap;

	va_start(ap, format);

	while (format && *(format + i))
	{
		k = 0;
		flag = 1;

		if (format[i] == special_char)
		{
			while (k < 2 && flag)
			{
				if (format[i+1] == lst[k].c)
				{
					flag = 0;
					lst[k].f(ap);
					i++;
				}
				k++;
			}
		}
		if(flag)
		{
			_putchar(format[i]);
		}
		i++;
	}
	_putchar('\n');
	va_end(ap);
	return (i);
}
