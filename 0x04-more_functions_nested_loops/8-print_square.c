#include "main.h"
/* 
* print_line- drwa a straight line in the terminal
* @size: number of times the character should be printed
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
