#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program to generate random number
 * return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("The number is %d\n", n);
if (n > 0)
printf("%d is positive\n");
else if (n == 0)
printf("%d is zero\n");
else
printf("%d is negative\n");
return (0);
}
