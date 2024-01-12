#include "main.h"
/**
* _memcpy - copy memory
* @src: source string
* @dest: destiny string
* @n: first n bytes
* Return: a encoded string pointer.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
