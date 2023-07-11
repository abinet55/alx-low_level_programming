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
int i;
c = malloc(*str * sizeof(str));
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
c[i] = str[i];
return (c);
free(c);
}
