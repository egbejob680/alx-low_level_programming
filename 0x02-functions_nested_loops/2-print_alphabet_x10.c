#include "main.h"
/**
*  prints_alphabet_x10- print 10 times the alphabet ,followed by a new line
* Return - Always 0(success)
*/
void print_alphabet_x10(void)
{
char a;
int i;
i = 1;
while (i <= 10)
{
a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
i++;
}
}
