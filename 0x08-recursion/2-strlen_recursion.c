#include "main.h"
/*
 * _strlen_recursion - a function that returns the length of a string.
 * @s: pointer to string
 * Return: int
*/
int _strlen_recursion(char *s)
{
	int rt = 0;

	if (*s > '\0')
	{
	rt += _strlen_recursion(s + 1) + 1;
	}
	_return(rt);
}
