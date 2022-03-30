#include "main.h"
/**
* rev_string - reverse a string
* @s: the string to be reversed
* Return: viod
*/
void rev_string(char *s)
{
    int len = _strlen(s);
    int i = 0;
    for (i=0; i < (len/2); i++)
    {
        swap(s + i, s + (len -1 -i));
    }
}
/**
* swap - swap two variable values
* @p: first character
* @q: second character
* Return: void
*/
void swap(char *p , char *q)
{
    char tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
}
/**
* _strlen -returns size of a string
* @s: string
* Return: size of string
*/
int _strlen(char *s)
{
    int count = 0;
    int i = 0;
    while (s[i] != 0)
    {
        count++;
        i++;
    }
    return (count);
}  
