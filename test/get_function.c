 #include <string.h>
 #include <stdlib.h>
 #include "holberton.h"
/**
 *print_char - display a character
 *@p: argument
 */
void print_char(va_list p)
{
	_putchar(va_arg(p, int));
}
/**
 *print_string - display a string
 *@p: argument
 */
void print_string(va_list p)
{
	char *s;
	unsigned int i;

	s = va_arg(p, char *);

	if (s != NULL)
	{
		for (i = 0; i < strlen(s); i++)
		{
			_putchar(s[i]);
		}
	}
}
