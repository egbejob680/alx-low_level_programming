#include "main.h"
/**
*_strncpy - copies a strings
* @dest
* @src
* @n 
* return a pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (src[j] != '\0' && i < n)
{
dest[i] = src[j];
i++;
while ( i < n)
{
dest[i] = '\0';
i++;
}
return dest;
}