#include<stdlib.h>
#include "main.h"
/**
* main - print all the alphabets in lowercase,
* foolowed by a new line
* Return always 0 (success)
*/
int main(void)
{
   char j;
   for (j = 'a'; j <= 'z'; j++)
   {
       putchar(j);
   }
   putchar('\n');
   return(0);
}
