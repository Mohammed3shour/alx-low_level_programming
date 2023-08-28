#include "main.h"

/**
 * _strspn- a function that gets the length of a prefix substring.
 * @accept: number of bytes
 * @s: a string
 * Return: unsigned int tir, tjr
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int tir, tjr;

	for (tir = 0; s[tir] != '\0' ; tir++)
	{
	for (tjr = 0; accept[tjr] != s[tir] ; tjr++)
	{
	if (accept[tjr] == '\0')
	return (tir);
	}
	}
	return (tir);
}
