#include<stdlib.h>
#include<time.h>
#include<stdlib.h>

/**
* main - assign and print the last digit of a  random number 
* Return always 0 (success)
*/
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    printf("%d last digit of %d is %d", n, n % 10);
    if (n % 10 > 5)
    printf("and is greater than 5\n")
    else if (n % 10 ==0)
    printf("%d and is 0\n");
    else if (n % 10 < 6 && n % 10 != 0)
    printf("%d and is less than 6 and not 0\n",n);
    return(0);
}