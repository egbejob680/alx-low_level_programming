#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdlib.h>
/**
* main - assign a random number to int n
* it executes the program and print n
* Return always 0 (success)
*/
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    if (n > 0){
        printf("%d is positive\n", n);
    }
    else if (n == 0){
        printf("%d is zero\n", n);
    }
    else if (n < 0){
        printf("%d is negative\n", n);
    }
    return(0);

}
