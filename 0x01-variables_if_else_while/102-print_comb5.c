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

int A[] = {'0', '0', '0', '1'};
int i;
while (1)
{
putchar(A[0]);
putchar(A[1]);
putchar(' ');
putchar(A[2]);
putchar(A[3]);
if (A[0] == '9' && A[1] == '8' && A[2] == '9' && A[3] == '9')
{
break;
}
putchar(',');
putchar(' ');
for (i = 3; i >= 0; i--)
{
if (A[i] < '9')
{
break;
}
A[i] = '0';
}
A[i]++;
}
putchar('\n');
return (0);
}
