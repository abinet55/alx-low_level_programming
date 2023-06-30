#include "main.h"
/**
* _strcat - concatenate two strings
* @dest: destination string
* @src: source string
* Return: value of dest
*/

char *_strcat(char *dest, char *src)
{
int d, s;
d = 0;
s = 0;
while (dest[d] != '\0')
d++;

while (src[s] != '\0')
{
dest[d] = src[s];
d++;
s++;
}

dest[d] = '\0';
return (dest);

}
