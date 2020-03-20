#include "holberton.h"
/**
 *rot13 - encodes a string
 *@p: input
 *Return: int of number of character
 */
int rot13(va_list p)
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
				else
				{
					_putchar(s[i]);
				}
				j++;
			}
			i++;
		}
		return (i);
	}
	else if (!s[0])
	{
		_putchar(s[0]);
		return (1);
	}
	return (0);
}
