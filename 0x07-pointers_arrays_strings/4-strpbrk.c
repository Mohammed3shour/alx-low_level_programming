
#include "main.h"

/**
 * _strpbrk- a function that searches a string for any of a set of bytes.
 * @accept: string.
 * @s: a string
 * Return: s if matches one of the bytes in or 	NULL if no byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int tir, tjr;
	char *p;
	tir = 0;
	while (s[tir] != '\0')
	{
	tjr = 0;
	while (accept[tjr] != '\0')
	{
	if (accept[tjr] == s[tir])
	{
	p = &s[tir];
	return (p);
	}
	tjr++;
	}
	tir++;
	}
	return (0);
}

