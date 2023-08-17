#include <stdio.h>
/**
 * main - Entry point
 * Description: print all alphbet letters except q and e
 * Return: always 0 (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		ch++;
		putchar(ch);
		ch++;
	}
		putchar('\n');
return (0);
}
