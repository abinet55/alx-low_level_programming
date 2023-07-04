#include "main.h"
/**
* _strspn - counts number of characters
* @s: string to be scaned
* @accept: string to be search
* Return: intiger
*/

unsigned int _strspn(char *s, char *accept)
{
int i, j;
int k = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
k++;
}
}
else
return (k);
}
return (k);
}
