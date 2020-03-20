#include "holberton.h"
/**
 *print_rot13 - encodes a string
 *@p: input
 *Return: int of number of character
 */
int print_rot13(va_list p)
{
	char *s;
	int i = 0, j, flag = 1;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(p, char *);

	if (s != NULL && s[0] != '\0')
	{
		while (*(s + i) != '\0')
		{
			j = 0;
			flag = 1;
			while (j < 53 && flag)
			{
				if (*(s + i) == alpha[j])
				{
					_putchar(code[j]);
					flag = 0;
				}
				j++;
				if (j == 53)
				{
					_putchar(s[i]);
				}
			}
			i++;
		}
	}
	else
	{
		write(1, "(null)", 6);
		return (6);
	}
	return (i);
}
