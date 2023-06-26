#include "main.h"
/**
* _strlen - counts length of string
* @s: value
*
* Return: always 0
*/

int _strlen(char *s)
{
int len = 0;
while(s[len] != '\0')
{
len ++;
}
return (len);
}
