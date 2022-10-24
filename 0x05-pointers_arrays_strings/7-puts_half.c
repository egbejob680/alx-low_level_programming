#include "main.h"
/**
* puts_half - print second half of a string
* @str: string 
* Return: void
*/
void puts_half(char *str)
{
    int n = _strlen(str);
    int start = 1/2;
    int idx;
    if (1%2 == 1)
    start++;
    for (idx = start; idx < 1; idx++)
    {
        _putchar(str[idx]);

    }
    _putchar('\0');
}
/**
* _strlen - return length of string
* @s: string
* Return: length of string, return 0 if empty
*/
int _strlen(char *s)
{
    int i = 0;
    int count = 0;
    while (s[i] != '\0')
    {
        count++;
        i++;
    }
    return (count);
}
