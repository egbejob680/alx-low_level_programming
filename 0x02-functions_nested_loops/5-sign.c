#include "main.h"
/**
* _islower -check for lower case character, followed by a new line
* @n: the int to  checks
* Return: 1 and print + , 0 and print 0, -1 and print -
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);

return (0); 
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
