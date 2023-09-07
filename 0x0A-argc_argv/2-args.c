#include <stdio.h>
/**
 * main -  a program that prints all arguments it receives.
 * @argv : list
 * @argc : int
 * Return: always 0 (success)
 */
int main(int argc, char const *argv[])
{
	int i = 0 ;

	while (argc--)
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
