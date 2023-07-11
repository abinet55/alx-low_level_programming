#include "main.h"
#include <stdlib.h>
/**
* _strdup - duplicate string
* @str: pointer to string
* Return: returnc char
*/

char *_strdup(char *str)
{
char *c;
int i, j;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
c = malloc(i * sizeof(str) + 1);
if (c == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++) 
c[j] = str[j];
return (c);
}
