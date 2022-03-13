#include<stdlib.h>

/**
* main - print all the single digit numbers of base 10
* starting from 0, foolowed by a new line 
* Return always 0 (success)
*/
int main(void)
{
   int n;
  
  for (n=48; n<58; n++)
  {
      putchar(n);
  }
 
   putchar('\n');
   return(0);
}
