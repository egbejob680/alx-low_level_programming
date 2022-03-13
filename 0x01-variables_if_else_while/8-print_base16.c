#include<stdlib.h>

/**
* main - print all the numbers in base 16 in lowercase
* foolowed by a new line
* Return always 0 (success)
*/
int main(void)
{
   int n;
   char i;
   for (n = 48; n < 58; n++)
   {
    putchar(n);
   }
   for (i = 'a'; i <= 'f'; i++)
   {
    putchar(i);
   }
   putchar('\n');
   return(0);
}
