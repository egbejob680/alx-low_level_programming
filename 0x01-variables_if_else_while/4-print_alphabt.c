#include<stdlib.h>

/**
* main - print all the alphabets in lowercase,
* foolowed by a new line and ommiting q and e 
* Return always 0 (success)
*/
int main(void)
{
   char  i = 'a';
   while ( i <= 'z')
   {
       if (i != 'e' && i != 'q')
       {
           putchar(i);
       }
   }
   putchar('\n');
   return(0);
}
