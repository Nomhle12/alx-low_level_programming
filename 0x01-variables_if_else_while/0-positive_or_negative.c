#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 *
 */

/**
 *main - main fuction
 *Print whether the number stored in the variable n is positive or negative.
 *Return: Always 0 (Success)
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
