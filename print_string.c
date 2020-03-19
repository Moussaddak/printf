 #include "holberton.h"
/**
 *print_char - display a character
 *@p: argument
 *Return: integer number of char
 */
int print_char(va_list p)
{
	_putchar(va_arg(p, int));
	return (1);
}
/**
 *print_string - display a string
 *@p: argument
 *Return: integer number of char
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
