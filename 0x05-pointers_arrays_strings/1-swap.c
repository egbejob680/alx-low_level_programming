#include "main.h"
/**
* swap_int
* @a: first variable pointer
* @b: second variable pointer
* Return: void
*/
void swap_int(int *a, int *b)
{
    int tmp;
    tmp = *b;
    *b = *a;
    *a = tmp;
}
