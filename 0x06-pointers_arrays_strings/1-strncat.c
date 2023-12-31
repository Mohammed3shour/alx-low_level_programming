#include "main.h"
/**
 * _strcat - funcation that concatenates
 * two string.
 * @dest: pointer to destnation input
 * @str: pointer to source input
 * @n: most number of bytes from @str
 * Return: @dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
	c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[c + i] = src[i];
	/*null terminate dest*/
	dest[c + i] = '\0';
	return (dest);
}
