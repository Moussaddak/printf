#include "holberton.h"
/**
 *_printf - function that produces output according to a format
 *@format: a string to be displayed in out
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
<<<<<<< HEAD
{
	unsigned int i = 0, flag, l = 0, st_len = 0, nb1 = 0, nb2 = 0;
=======
{	
  unsigned int i = 0, flag, l = 0, st_len = 0, nb1 = 0, nb2 = 0;
>>>>>>> 3d769ed70cba7e6c049b9d214e259ba206dfbd63
	char special_char  = '%';
	va_list ap;

	va_start(ap, format);
	while (format && *(format + i))
<<<<<<< HEAD
	{
		flag = 1;
		if (format[i] == special_char && format[i + 1] == '\0')
		{
			return (-1);
		}
		else if (format[i] == special_char &&
		    (format[i + 1] == special_char || format[i + 1] == '\0'))
		{
=======
	{	
		flag = 1;
		if (format[i] == special_char && (format[i + 1] == special_char || format[i + 1] == '\0'))
		{	
>>>>>>> 3d769ed70cba7e6c049b9d214e259ba206dfbd63
			_putchar('%');
			nb1++;
			flag = 0;
			i++;
		}
		else if (format[i] == special_char && format[i + 1] != '\0'
<<<<<<< HEAD
			 && get_op_func(format[i + 1]) != NULL)
=======
		&& get_op_func(format[i + 1]) != NULL)
>>>>>>> 3d769ed70cba7e6c049b9d214e259ba206dfbd63
		{
			nb2++;
			flag = 0;
			l = (get_op_func(format[i + 1]))(ap);
			st_len += l;
			i++;
		}
		if (flag)
		{
			_putchar(format[i]);
		}
		if (format[i] != '\0')
<<<<<<< HEAD
			i++;
=======
		{
			i++;
		}
>>>>>>> 3d769ed70cba7e6c049b9d214e259ba206dfbd63
	}
	va_end(ap);
	if (!format)
		return (-1);
	return (i - (nb1 + 2 * nb2) + st_len);
}
