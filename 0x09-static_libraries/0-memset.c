#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max byte to use
 * Return: pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int tir;

	for (tir = 0; n > 0; tir++, n--)
	{
	s[tir] = b;
	}
	return (s);
}
