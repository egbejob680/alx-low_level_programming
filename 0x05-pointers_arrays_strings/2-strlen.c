#include "main.h"
/**
* _strlen - return the length of a string 
* @s: string
* Return: length of a string
*/
int _strlen(char *s)
{
    int index = 0;
    int count = 0;

    while (s[index] != '\0')
    {
        count++;
        index++;
    }
    return (count);
}
