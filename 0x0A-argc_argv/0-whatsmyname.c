#include "main.h"
#include <stdio.h>
/**
* main - check the code
* @argc: The size of the argv
* @argv: An array
* Return: Always argc.
*/
int main(int argc, char **argv)
{
if (argc > 0)
printf("%s\n", *argv);
return (0);
}
