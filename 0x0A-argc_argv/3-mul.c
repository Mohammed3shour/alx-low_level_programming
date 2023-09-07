#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that multiplies two numbers.
 * @argv : commandline 
 * @argc : pointer to array
 * Return:  0 if success
 */
int main(int argc, char const *argv[])
{
	int sum;

	if (argc == 3)
	{
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	}
	else
	{
	printf("errior\n");
	return (1);
	}
	return (0);
}
