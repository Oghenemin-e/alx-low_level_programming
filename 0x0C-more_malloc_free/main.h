#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))

int multiply(int num1, int num2)
int main(int argc, char *argv[])
int isNumber(const char *str)

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int len(char *str);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /*MAIN_H*/
