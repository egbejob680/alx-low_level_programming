#include "main.h"
/* largest_number - return largest of 3 numbers
* @a: first interger
* @b: second interger
* @c: third interger
* Return: largest number
*/
int largest_number(int a, int b, int c)
{
int largest;
if (a>=b && a>=c)
{
largest = a;
}
if (b>=a && b>=c)
{
largest = b;
}
if (c>=b && c>=b)
{
largest = c;
}
return(largest);
}
