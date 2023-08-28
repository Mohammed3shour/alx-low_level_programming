#include "main.h"

/**
 * _memcpy -  a function that copies memory area.
 * @dest: memory area
 * @src: sourse
 * @n: length of src to be copied
 *
 * Return: pointer to dest
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int tir;

	for (tir = 0; tir < n; tir++)
	{
		dest[tir] = src[tir];
	}
	return (dest);
}
