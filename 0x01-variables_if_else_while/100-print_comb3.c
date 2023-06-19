#include <stdio.h>

/**
* main- print all combination of two digit numbers
*
* Return: the value 0
*/

int main(void)

{

int num1;

int num2;

for (num1 = 0; num1 <= 9; num1++)

{

for (num2 = num1 + 1; num2 <=9; num2++)

{

putchar(num1 + '0');

putchar(num2 + '0');

putchar(',');

putchar(' ');

}
}

putchar('\n');

return (0);

}
