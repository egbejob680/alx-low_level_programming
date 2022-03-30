#include "main.h"
/**
* puts2 -prints every character of a string starting with
* first character
* @str: string
* Rturn: nothing
*/
void puts2(char *str)
{
    int idx = 0;
    while (str[idx] != '\0')
    {
        if (idx % 2 == 1)
        {
            idx++;
            continue;
        }
        _putchar(str[idx]);
        idx++;
    }
    _putchar('\n');
}
