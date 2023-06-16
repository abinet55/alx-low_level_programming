#include <stdio.h>
/**
* main - prints alphabet 
*
* Return: always 0 (if successful)
*/
int main(void)

{
char alphabet;

for (alphabet='a'; alphabet <= 'z'; alphabet++)

{

putchar(alphabet);

putchar('\n');
}

return (0);

}
