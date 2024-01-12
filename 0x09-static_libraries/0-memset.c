#include "main.h"
/**
* _memset - fills memory with constant bytes
* @s: the string
* @c: constant
* @j: first n bytes
* Return: a string pointer.
*/
char *_memset(char *s, char c, unsigned int j)
{
unsigned int i;
for (i = 0; i < j; i++)
s[i] = c;
return (s);
}
