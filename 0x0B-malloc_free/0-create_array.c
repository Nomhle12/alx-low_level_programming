#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **create_array - creates an array of chars,
 *and initializes it with a specific char.
 *@size: number of elementes
 *@c: array created
 *
 *Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;

if (size == 0)
{
return (NULL);
}
s = malloc(size * sizeof(char));
for (i = 0; i < size; i++)
{
s[i] = c;
}

if (s == NULL)
{
return (NULL);
}
return (s);

}
