#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i,j;
	i = _printf("Let's try to printf a simple sentence.\n");
	j = printf("Let's try to printf a simple sentence.\n");
        printf("i = %d \n",i);
	printf("j = %d \n",j);
	i = _printf("Character:[%c]\n", 'H');
	j = printf("Character:[%c]\n", 'H');
	printf("i = %d \n",i);
	printf("j = %d \n", j);
	i = _printf("String:[%s]\n", "Iamastring!");
	j = printf("String:[%s]\n", "Iamastring!");
	printf("i = %d \n",i);
	printf("j = %d \n",j);
	i = _printf("Percent:[%%]\n");
	j = printf("Percent:[%%]\n");
	printf("i = %d \n", i);
	printf("j = %d \n", j);
	i = _printf(NULL);
	printf("NULL = %d\n",i);
	return (0);
}
