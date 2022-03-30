#include "main.h"
/**
* _print_rev_recursion - print a string in reverse order
* @s: string
* return nothing
*/
void _print_rev_recursion(char *s)
{
if (!(*s))
return;
_print_rev_recursion(++s);
_putchar(*(--s));
}
