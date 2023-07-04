#include <stddef.h>
#include "main.h"
/**
* _strchr - search for character
* @s: string to be search
* @c: character to be search
* Return: character
*/

char *_strchr(char *s, char c)
{
while(*s)
{
if (*s != c)
{
s++;
}
else
return (s);
}
if (c == '\0')
return (s);
return (NULL);
}
