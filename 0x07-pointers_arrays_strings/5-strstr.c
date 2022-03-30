#include "main.h"
/**
* _strstr -locate a substring in another string
* @haystack: string to be searched
* @needel: substring
* Return: ponter to beginning of located substring
*/
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        if (*haystack == *needle && compare(haystack,needle))
        {
            return (haystack);
        }
        haystack++;
    }
    return (NULL);
}
/**
* compare -compare two strings
* @a: string a
* @b: string b
* Return: 1 if a equalls b, otherwise 0
*/
int compare(char *a, char *b)
{
    while (*a && *b)
    {
        if (*a != *b)
        return (0);
        a++;
        b++;
    }
    return (1);
}
