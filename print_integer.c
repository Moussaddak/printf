#include "holberton.h"
#define ABS(x) ((x) < (0) ? (-(x)) : (x))
/**
 *print_int - print an integer
 *@p: input integer argument
 *Return: n
 */
 int print_int(va_list p)
 {
	int n ,div = 1, i = 0, j, n_i, nb = 0;
	
	n = va_arg(p, int);
	
	if (n < 0)
	{
		_putchar('-');
		n = ABS(n);
		nb++;
	}
	else if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		for(; n / div >= 10; div *=10)
		{
			i++;
		}
		n_i = i - 2;
		_putchar((n % 10) + '0');
		for (j = 1; j <= n_i; j++)
		{
			_putchar(((n / _pow(10,j)) % 10) + '0');
		}
		_putchar((n / _pow(10, i)) + '0');
	}
	 
	return (i + nb); 
	 
 }
 /**
 *_pow - returns the value of x raised to the power of y
 *@x: input
 *@y: input
 *Return: integer
 */
int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow(x, y - 1));
}
