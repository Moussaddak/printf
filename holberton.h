#ifndef HOLBERTON_HF
#define HOLBERTON_HF
#include <stdarg.h>
int _putchar(char c);
void print_char(va_list p);
void print_string(va_list p);
int _printf(const char *format, ...);

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
	void (*f)(va_list);
} list;
#endif
