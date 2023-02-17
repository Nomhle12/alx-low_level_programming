#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main function
 * No Description:
 * Return: 0
 */
int main(void)
{
char ch = 'g';
int n = (int)(ch);

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%ld is positive\n", (long int)(n));
}
else if (n < 0)
{
printf("%ld is negative\n", (long int)(n));
}
else if (n == 0)
{
printf("%ld is zero\n", (long int)(n));
}
return (0);
}
