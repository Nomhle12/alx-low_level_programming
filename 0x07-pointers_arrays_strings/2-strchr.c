#include "main.h"

/**
 *_strchr - locates a character in a string
 *@c: character to be located
 *@s: the string we are searching in
 *
 *Return: A pointer to the first occurance of c in s,
 *        or NULL is c is not found.
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
