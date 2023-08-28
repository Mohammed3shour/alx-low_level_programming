#include "main.h"
#include <stdio.h>
/**
 * print_diagsums-  a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: 2d array
 * @size: size of arrray (rows and colums)
 * Return: nothing
*/
void print_diagsums(int *a, int size)
{
	int tir, s1 = 0, s2 = 0;

	for (tir = 0; tir < size; tir++)
	{
	s1 += a[tir];
	s2 += a[size - tir -1];
	a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
