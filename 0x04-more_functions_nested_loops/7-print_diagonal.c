#include "main.h"
/* 
* print_line- drwa a straight line in the terminal
* @n: number of times the character \ should be printed
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 1; j < n; j++)
{
if (j == 0)
_putchar('\\');
else if (j < i)
_putchar(' ');
}
_putchar('\n');
}
}
}
