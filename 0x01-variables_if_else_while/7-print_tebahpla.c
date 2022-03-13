#include<stdlib.h>

/**
* main - print all the alphabets in lowercase and uppercase
* foolowed by a new line
* Return always 0 (success)
*/
int main(void)
{
   int i;
   for (i = 'z'; i >= 'a'; i--)
   {
       putchar(i);
   }
   
   putchar('\n');
   return(0);
}
