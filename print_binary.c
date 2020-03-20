#include "holberton.h"
void rev_string(char *s);
/**
 *print_binary - convert a decimal number to binary
 *@p: input argument
 *Return: int number of char
 */
int print_binary(va_list p)
{
	long int i, n;
	int k, j = 0;
	char c[32] = {0};

	n = va_arg(p, int);
	i = 2 * n;
	do {
		i /= 2;
		c[j] = i % 2 + '0';
		j++;
	} while (i / 2);
	c[j] = '\0';
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
