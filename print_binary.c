#include "holberton.h"
void rev_string(char *s);
/**
 *print_binary - convert a decimal number to binary
 *@p: input argument
 *Return: int number of char
 */
int print_binary(va_list p)
{
	int i, k, n, j = 0;
	char *c;

	n = va_arg(p, int);
	i = 2 * n;
	c = malloc(2);
	do {
		i /= 2;
		c = realloc(c, 2 + j);
		c[j] = i % 2 + '0';
		j++;
	} while (i / 2);
	rev_string(c);
	for (k = 0; c[k]; k++)
	{
		_putchar(c[k]);
	}
	return (k);
}
/**
 *rev_string - prints a string in reverse
 *@s: input
 */
void rev_string(char *s)
{
	int len = 0, i;
	char *e, k;

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
}