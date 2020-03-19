#include "holberton.h"
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


	while (i < 4)
	{
		if (s == lst[i].c)
		{
			return (lst[i].f);
		}
		i++;
	}
	return (NULL);
}
