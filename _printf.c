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
	while (format && *(format + i))
	{	k = 0;
		flag = 1;
		if (format[i] == special_char &&
		    format[i + 1] == special_char)
		{	_putchar('%');
			nb1++;
			flag = 0;
		}
		else if (format[i] == special_char)
		{
			while (k < 2 && flag)
			{
				if (format[i + 1] == lst[k].c)
				{	nb2++;
					flag = 0;
					l = lst[k].f(ap);
					st_len += l;
					i++;
				}
				k++;
			}
		}
		if (flag)
		{
			_putchar(format[i]);
		}
		i++;
	}
	i++;
	va_end(ap);
	if (!format)
		return (-1);
	return (i - (nb1 - 2 * nb2) + st_len);
}
