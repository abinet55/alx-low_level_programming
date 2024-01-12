#include <stdio.h>
/**
* main - check the code
* @argc: The size of the argv
* @argv: An array
* Return: Always argc.
*/
int main(int argc, char **argv)
{
if (*argv[0] > 0)
printf("%i\n", argc - 1);
return (0);
}
