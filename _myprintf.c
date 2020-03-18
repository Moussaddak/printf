#include <stdarg.h>
#include "holberton.h"
/**
 *_printf - function that produces output according to a format
 *@format: a string to be displayed in out
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{	unsigned int i = 0, flag, k, l = 0, st_len = 0, nb1 = 0, nb2 = 0;
	char special_char  = '%';
	list lst[] = {
		{'c', print_char},
		{'s', print_string}
	};
	va_list ap;

	va_start(ap, format);

	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			nbc++;
			putchar(format[i]);
		}
		if ((format[i] == '%') && (format[i + 1]))
		{
			for (j = 0; j < 2; j++)
			{
				if (format[i + 1] == lst[j].c)
				{

					nbc = lst[j].f;
				}
				else
					return(-1);
			}
		}
			i++;

	}
	va_end(ap);
	return (nbc);
}
