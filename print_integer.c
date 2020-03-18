#include "holberton.h"
/**
 *print_int - printing an integer
 *@p: input integer argument
 *Return: number of int
 */

int print_int(va_list p)
{
int long f_number, num = 1, count = 0;
unsigned int long decimal;
f_number = va_arg(p, int);


if (f_numbber < 0)
{
_putchar('-');
count++;
f_number = -1 * f_number;
}
decimal = f_number;
/* counting the decimal devider */
while ((decimal / 10) != 0)
{
decimal = decimal / 10;
dec_num *= 10;
}

/*substructing the decimal divisions of the number */
while (dec_num > 0)
{
_putchar((f_number / dec_num) +'0');
count++;
f_number = f_number % dec_num;
dec_num = dec_num / 10;
}
return (count);
}
