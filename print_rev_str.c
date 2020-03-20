#include "holberton.h"
/**
 *print_rev_str - prints a string in reverse
 *@p: input
 *Return: int number of char
 */
int print_rev_str(va_list p)
{
	int len = 0, i;
	char *e, k, *s;

	s = va_arg(p, char *);
	e = s;
	while (*e != '\0')
	{
		e++;
		len++;
	}
	e--;
	for (i = 0; i < (len / 2); i++)
	{
		k = *e;
		*e = *s;
		*s = k;
		s++;
		e--;
	}
	return (len);
}
