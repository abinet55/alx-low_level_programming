#include "main.h"
#include <stdlib.h>
/**
* create_array - pointer to array
* @size: size of argument
* @c: input
* Return: return char
*/

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
if (size == 0)
return (NULL);
s = malloc(size * sizeof(*s));
if (s == NULL)
return (NULL);
for (i = 0; i < size; i++)
s[i] = c;
return (s);
}
