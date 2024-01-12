#include <stdio.h>
#include <stdlib.h>
/**
* main - check the code
* @argc: The size of the argv
* @argv: An array
* Return: Always 0 or 1.
*/
int main(int argc, char **argv)
{
int x, amount, coins = 0;
int values[] = {25, 10, 5, 2, 1};
if (argc - 1 != 1)
{
printf("%s\n", "Error");
return (1);
}
amount = atoi(argv[1]);
for (x = 0; x < 5; x++)
while (values[x] <= amount)
{
coins++;
amount -= values[x];
}
printf("%i\n", coins);
return (0);
}
