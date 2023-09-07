#include <stdio.h>
/*
 * main - a program that prints its name, followed by a new line
 * @argc : int
 * @argv : list
 * return : 0
 */
int main(int argc , char const *argv[])
{
	(void)argc;
	printf("%s\n", argc[0]);
	return (0);
}
