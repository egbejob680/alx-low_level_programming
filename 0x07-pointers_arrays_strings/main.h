#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
int _putchar(int);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *desk, char *src, unsigned int n);
int *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
int *_strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needel);
int compare(char *a, char *b);
void set_string(char **, char *);
void print_chessboard(char (*a)[8])
void print_diagsums(int *a, int size)
#endif
