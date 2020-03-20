#ifndef HOLBERTON_HF
#define HOLBERTON_HF
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list p);
int print_string(va_list p);
int print_int(va_list p);
int print_rot13(va_list p);
int print_binary(va_list p);
int print_rev_str(va_list p);
int _pow(int x, int y);
void rev_string(char *s);
/**
 * struct list - a list of types of arguments.
 * @c: First member
 * @f: Second member pointer to function
 *
 * Description: a list of types of arguments passed to the function
 */
typedef struct list
{
	char c;
	int (*f)(va_list);
} list;
int (*get_op_func(char s))(va_list);
#endif
