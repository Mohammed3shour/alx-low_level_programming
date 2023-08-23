#include "main.h"
#include <stdio.h>
/*
 * islower - determines whether ascii is lowercase
 * @c: character
 * Return: 1 if true, 0 if false
*/
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
/*
 *isDelimiter - etermines whether ascii is a isdelimiter
 * @c: character
 * Return: 1 if true, 0 if false
*/
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	if (c == delimiter[i])
	return (1);
	return (0);

}
/*
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string wich caitalized words
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int founDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			founDelimit = 1;
		else if (isLower(*s) && founDelimit)
		{
		*s -= 32;
			founDelimit = 0;
		}
		else
			founDelimit = 1;
		s++;
	}
	return (ptr);

}
