#include "main.h"
/* 
* print_square- print a square
* @size: size of square
*/
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = ; i<=size; i++)
{
for (j = ; j<=size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
