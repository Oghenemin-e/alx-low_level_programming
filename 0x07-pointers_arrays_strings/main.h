#ifndef MAIN_H
#define MAIN_H

/**
* void prototypes()
* int prototypes()
*/

#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);

char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *, int);
void set_string(char **s, char *to);

#endif /*MAIN_H*/
