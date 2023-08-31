#include "main.h"
/*
 * _prime_number - a function that returns 1 if the input integer
 * is a prime number,otherwise return 0.
 * @n: int
 * @p: int
 * Return: returns 1 if the input is a prime number,or return 0.
*/
int check_prime(int n, int p);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/*
 * check_prime - check number that can biggger than n if they can divide it
 * @n: int
 * @p: int
 * Return: int
*/

int check_prime(int n, int p)
{
	if (p >= n && n > 1)
	return(1);
	else if (n % p == 0 || n <= 1)
	return(0);
	else
	return (check_prime(n, p + 1));
}
