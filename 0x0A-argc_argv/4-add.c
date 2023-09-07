#include <stdio.h>
#include <stdlib.h>
/**
 * main -   a program that adds positive numbers.
 * @argv : commandline 
 * @argc : pointer to array
 * Return:  0 if success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
	for (c = argv[argc]; *c; c++)
	if(*c < '0' || *c > '9')
	 return(printf("error\n"), 1);
	sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
