#include <stdio.h>
#include <stdlib.h>
/**
* main - check the code
* @argc: The size of the argv
* @argv: An array
* Return: Always 0 || 1.
*/
int main(int argc, char **argv)
{
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
