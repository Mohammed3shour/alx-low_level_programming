nclude <stdio.h>
/*
 *  * main -  a program that prints the number of arguments passed into it.
 *   * @argc : nuber of command
 *    * @argv : an array 
 *     * return : 0
 *     */
int main(int argc, char const *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
