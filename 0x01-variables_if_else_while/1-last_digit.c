#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int ld = n % 10;
printf("The last digit of %d is %d and ", n, ld);
if (n > 5)
printf("is greater than 5\n");
else if (n == 0)
printf("is zero\n");
else
printf("is less than 6 and not 0\n");
return (0);
}
