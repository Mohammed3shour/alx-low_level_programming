#include "main.h"
/*
 * _pow_recursion - a function that returns the value of x raised to the power
 * of y4-pow_recursion.c
 * @x: base
 * @y: integer
 * Return: If y is lower than 0, the function should return -1
*/
int _pow_recursion(int x, int y)
{

	if (y < 0)
	return(-1);
	else if (y == 1)
	return(x);
	else if (y == 0)
	return(1);
	return(x * f_pow_recursion(x, y - 1));
}
