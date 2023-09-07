#include "main.h"
#include <stdio.h>
/**
 * string_nconcat-   a function that concatenates two strings.
 * @s1 : string 1
 * @s : string 2
 * Return:  a pointer to space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_lentgh, s2_length;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (s1_lentgh = 0; s1[s1_lentgh] != '\0'; s1_lentgh++)
		;
	for (s2_lentgh = 0; s2[s2_lentgh] != '\0'; s2_lentgh++)
		;
	str = malloc(s1_lentgh + n + 1);
	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
	str[i] = s2[j];
	i++;
	}
	str[i] = '\0';
	return (str);
}
