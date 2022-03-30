#include "main.h"
/**
* _strpbrk - search a string for any number of bytes
* @s: string to search
* @accept: string containing bytes to be search
* Return: pointer to matching character
*/
 char *_strpbrk(char *s, char *accept)
 {
     int i;
     int j;
     char *p = 0;
     for (i=0; s[i] != '\0'; i++)
     {
         for (j=0; accept[j] != '\0'; j++)
         {
             if (s[i] == accept[j])
             return (&s[i]);
         }

     }
     return (p);
 }
 