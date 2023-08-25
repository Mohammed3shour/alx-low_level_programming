#include "main.h"
#include <stdio.h>
/*
 * print_buffer - print a buffer
 * @b: string
 * @size: size of buffer
*/

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
	for (start = 0; start < size; start += 10)
	{
	end = (size - start < 10) ? size - start : 10;
	printf("%08x: ", start);
	printfHexes(b, start, end);
	printfASCII(b, start, end);
	printf("\n");
	}
	}
	else
	printf("\n");

}
