#include <stdio.h>
/**
* main - prints the size of data type
*
* Return: always zero
*/

int main(void)

{

printf("size of a char: %zu byte(s)\n", sizeof(char));
printf("size of an int: %zu byte(s)\n", sizeof(int));
printf("size of a long int: %zu byte(s)\n", sizeof(long));
printf("size of a long long int: %zu byte(s)\n", sizeof(long long));
printf("size of a float: %zu byte(s)\n", sizeof(float));

return (0);

}
