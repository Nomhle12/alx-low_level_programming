#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: interger to be swaped
 *@b: interger to be swaped
 *
 *Return: on succes 0.
 **/

void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;
}
