 #include "holberton.h"
 /**
 *print_char - display a character
 *@p: argument
 */
int print_char(va_list p)
{
	_putchar(va_arg(p, int));
	return (1);
}
/**
 *print_string - display a string
 *@p: argument
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
 *get_op_func - select the right operation
 *@s: input a character
 *Return: number of char 
 */
int (*get_op_func(char s))(va_list)
{
		list lst[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int}
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
