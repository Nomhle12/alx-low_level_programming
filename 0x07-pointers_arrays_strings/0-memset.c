#include "main.h"

/**
 *_memset - function fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @b
 *@s:A pointer to the memory area to be filled.
 *@b:The character to fill the memory area with.
 *@n:The number of bytes to be filled.
 *
 *Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned char i;
char *m = s;
char value = b;

for (i = 0, i < n; i++)
m[i] = value;

return (m);
}
