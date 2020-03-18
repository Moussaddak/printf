#include <stdio.h>
#include "holberton.h"
int main(void) {
	int len;

	len = _printf("Let's try to printf a simple sentence.\n");

	printf("len = [ %d ]\n", len);

	len = printf("Let's try to printf a simple sentence.\n");

	printf("len = [ %d ]\n", len);

	len = _printf("String:[%c]\n",'C');

	printf("len = [ %d ]\n", len);

	len = printf("String:[%c]\n",'C');

	printf("len = [ %d ]\n", len);

	len = _printf("Character:[%c]\n", 'H');
   
	printf("len = [ %d ]\n", len);

	len = printf("Character:[%c]\n", 'H');
  
	printf("len = [ %d ]\n", len);
  
	len = _printf("String:[%s]\n", "I am a string !");
  
	printf("len = [ %d ]\n", len);
  
	len = printf("String:[%s]\n", "I am a string !");

	printf("len = [ %d ]\n", len);
	return 0;
}
