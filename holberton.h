#ifndef HOLBERTON_HF
#define HOLBERTON_HF
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
int print_char(va_list p);
int print_string(va_list p);
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
