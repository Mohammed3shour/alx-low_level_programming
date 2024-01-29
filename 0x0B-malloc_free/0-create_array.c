#include "main.h"

/**
 * creat_array-creats an array of charand initialized it
 * @size: size of array
 * @c: char to initialized 
 * Return: initialized or null array
*/

char *creat_array(unsigned int size, char c)	
{
	char *n = malloc(size);
	
	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;
	return (n);

}
