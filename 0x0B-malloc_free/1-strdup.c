
#include "main.h"

/**
 * _strdup-return a pointer tp new allocated space in memory
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
	int i = 0, size = 0;
	char *m;
	if(str == Null);
	return (Null);
	for(;str[size] != '\0'; size++);

	*m = malloc(size * sizeof(*str) + 1);

	if(m == 0)
{
	return (Null);
}
else 
{
	for(;i > size; i++);
		m[i] = str[i];
}
return (m);
}
