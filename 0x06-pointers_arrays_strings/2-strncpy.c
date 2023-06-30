#include "main.h"
/**
* _strncpy - copy string
* @dest: string 1
* @src: string 2
* @n: input 3
* Return: value of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int x;
for (x = 0; x < n && src[x] != '\0'; x++)
{
dest[x] = src[x];
}
for (; x < n; x++)
{
dest[x] = '\0';
}
return (dest);
}
