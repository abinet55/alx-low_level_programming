#include "main.h"
/**
* _strlen_recursion - prints the length of string
* @s: string
* Return: integer
*/

int _strlen_recursion(char *s)
{
if (s[0] != '\0')
return (1 + _strlen_recursion(s + 1));
return (0);
}
