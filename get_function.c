#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
#include <stdarg.h>
/**
 *print_char - display a character
 *@p: argument
 *Return: int
 */
int print_char(va_list p)
{
	_putchar(va_arg(p, int));
	return (1);
}
/**
 *print_string - display a string
 *@p: argument
 *Return: int
 */
int print_string(va_list p)
{
	char *s;
	int i;

	s = va_arg(p, char *);

	if (s != NULL)
	{
		for (i = 0; s[i]; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}
	else
	{
		write(1, "(null)", 6);
		return (6);
	}
}
/**
 *get_op_func - selects the correct function to perform the operation
 *@s: input
 *Return: integer
 */
int (*get_op_func(char s))(va_list)
{
	list lst[] = {
		{'c', print_char},
		{'s', print_string}
	};
	int i = 0;


	while (i < 2)
	{
		if (s == lst[i].c)
		{
			return (lst[i].f);
		}
		i++;
	}
	return (NULL);
}
