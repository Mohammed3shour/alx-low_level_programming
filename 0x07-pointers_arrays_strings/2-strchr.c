#include "main.h"

/**
 * _strchr -  a function that locates a character in a string.
 * @c: constant
 * @s: pointer to pull the constsnt
 * Return: pointer to dest
*/
char *_strchr(char *s, char c)
{
	int tir;

	for (tir = 0; s[tir] >= '\0' ; tir++)
	{
	if (s[tir] == c)
	{
	return (s + tir);
	}
	}
	return ('\0');
}
