#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

int  _putchar(char c);
char *creat_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int hight);
void free_grid(int **grid, int hight);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif /*main.h*/
