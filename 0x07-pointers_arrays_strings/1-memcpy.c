#include "main.h"
/**
* _memcpy - copies memory
* @dest: destination
* @src: source
* @n: unsigned int
* Return: value of destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
