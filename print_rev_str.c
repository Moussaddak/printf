#include "holberton.h"
/**
 *print_rev_str - prints a string in reverse
 *@p: input
 *Return: int number of char
 */
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int print_rev_str(va_list p)
{
	char *str;

	str = va_arg(p, char *);

	if (str == NULL)
	{
		write(1, "(null)", 1);
		return (6);	
	}
	else
	{
		_print_rev_recursion(str);
	}
	return (_strlen_recursion(str));
}
/**
 *_print_rev_recursion - prints a string in reverse recursively
 *@s: input
 */
void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
/**
 *_strlen_recursion - prints the length of a string
 *@s: input
 *Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
