#include <stdlib.h>
#include "holberton.h"
/**
 *_printf - function that produces output according to a format
 *@format: a string to be displayed in out
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, flag, l = 0, st_len = 0, nb1 = 0, nb2 = 0;
	char special_char  = '%';
	va_list ap;

	va_start(ap, format);
	while (format && *(format + i))
	{
<<<<<<< HEAD
=======
		k = 0;
>>>>>>> 08a0325df58f9f4dce6fae14d0589b65f4533254
		flag = 1;
		if (format[i] == special_char &&
		    (format[i + 1] == special_char || format[i + 1] == '\0'))
		{
			_putchar('%');
			nb1++;
			flag = 0;
			i++;
		}
		else if (format[i] == special_char && format[i + 1] != '\0'
			 && get_op_func(format[i + 1]) != NULL)
		{
			nb2++;
			flag = 0;
			l = (get_op_func(format[i + 1]))(ap);
			st_len += l;
			i++;
		}
		if (flag)
			_putchar(format[i]);
<<<<<<< HEAD
		if (format[i] != '\0')
			i++;
	}
	va_end(ap);
	if (!format)
=======
		i++;
	}
	va_end(ap);
	if (format == NULL)
>>>>>>> 08a0325df58f9f4dce6fae14d0589b65f4533254
		return (-1);
	return (i - (nb1 - 2 * nb2) + st_len);
}
