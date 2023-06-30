#include "main.h"
/**
* _strncat - concatenate two strings
* @dest: destination string
* @src: source string
* @n: input integer
* Return: destination
*/

char *_strncat(char *dest, char *src, int n)
{
int d = 0;
int s = 0;

while (dest[d] != '\0')
{
d++;
}
while ((src[s] != '\0') && (d < 97) && (s < n))
{
dest[d] = src[s];
d++;
s++;
}
dest[d] = '\0';
return (dest);
}
