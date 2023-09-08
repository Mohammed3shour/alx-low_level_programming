#include "main.h"

/**
 * _memset-   memory with conts byte
 * @b : const
 * @s : pointer
 * @n : bytes
 * return : s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	*s++ = b;
	return (ptr);
}
/*
 * _calloc-   a function that concatenates two strings.
 * @nmemb : array
 * @size : size
 * Return:  a pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	m = malloc(sizeof(int) * nmemb);
	}
	if (m == 0)
	{
		return (NULL);
	_memset(m, 0, sizeof(int) * nemb);
	}
		return (m);
}
