#include "main.h"
/**
* _strlen_recursion - prints length of string
* @s: pointer to string
* Return: intger
*/

int _strlen_recursion(char *s)
{
int i = 0;
if (s[i] == '\0')
{
return (i);
}
return (1 + _strlen_recursion(s + 1));
}
