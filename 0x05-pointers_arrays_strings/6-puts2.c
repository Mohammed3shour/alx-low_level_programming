#include <unistd.h>
/**
 * puts2 - print every character of a string
 * @str: string parameter input
 * Return:nothing
*/
void puts2(char *str)
{
	int i;

	for (l = 0; str[i] != '\0'; i++)
	{
	if (i % 2 == 0)
	_putchar(str[i]);
	}
	_putchar('\n');
}
