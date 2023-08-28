#include "main.h"

/**
 * print_chessboard- a function that prints the chessboard.
 * @a: a row
 * Return: nothing
*/
void print_chessboard(char (*a)[8])
{
	int tir, tjr;

	for (tir = 0; tir < 8; tir++)
	{
	for (tjr = 0; tjr < 8; tjr++)
	{
		_putchar(a[tir][tjr]);
	}
	_putchar('\n');
	}

}
