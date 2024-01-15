#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array
* @size: size of the array.
* @c: char
* Return: pointer of an array of chars
*/
char *create_array(unsigned int size, char c)
{
char *ch;
unsigned int j;
if (size == 0)
return (NULL);
ch = malloc(sizeof(c) * size);
if (ch == NULL)
return (NULL);
for (j = 0; j < size; j++)
ch[j] = c;
return (ch);
}
