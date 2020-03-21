#include "holberton.h"
void rev_string(char *s);
void negative_binary(char *s, int i);
/**
 *print_binary - convert a decimal number to binary
 *@p: input argument
 *Return: int number of char
 */
int print_binary(va_list p)
{
	long int i, n;
	int k, j = 0, flag = 0;
	char c[32] = {0};

	n = va_arg(p, int);
	if (n < 0)
	{
		flag = 1;
    n = ABS(n);
	}
	i = 2 * n;
	do {
		i /= 2;
		c[j] = i % 2 + '0';
		j++;
	} while (i / 2);
  rev_string(c);
	if (flag)
	{
		negative_binary(c, j);
    rev_string(c);
	}
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
/**
 *negative_binary - convert to negative binary
 *@s: input
 *@i: input
 */
 void negative_binary(char *s, int i)
 {
	int x, k = 0, flag = 1;
 
	for (x = i; x < 32; x++)
	{
		s[x] = '0';
	}
	for (x = 0; x < 32; x++)
	{
		if (s[x] == '0')
		{
			s[x] = '1';
		}
		else
		{
			s[x] = '0';
		} 
	}
	while (flag && k < 32)
	{
		if (s[k] == '0')
		{
			s[k] = '1';
			flag = 0;
		}
		else if (s[k] == '1' && s[k + 1] == '1')
		{
			s[k] = '0';
		}
		else if (s[k] == '1' && s[k + 1] == '0')
		{
			s[k] = '0';
			s[k + 1] = '1';
			flag = 0;
		}
		k++;
	}
  s[32] ='\0';
 }
