#include "main.h"
/**
 * _strcat - funcation that concatenates two string.
 * @dest: pointer to destnation input
 * @str: pointer to source input
 * Return: pointer to resluting string @dest
*/
char *_strcat(char *dest, char *str)
{
	int c, c2;

	c = 0;

	/*find the size of dest array*/
	while (dest[c])
	c++;
	/*iterate through each src array value without the null byte*/
	for (c2 = 0; src[c2] ; c2++)
	/*append src[c2] to dest[c] while overwritting the null byte in dest*/
	dest[c++] = src[c2];
	return (dest);
}
