#include "main.h"
/**
* _isalpha - checks if it is alphabet
*
* @c: input to checked
* Return: always zero
*/

int _isalpha(int c)

{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

return (1);

else

return (0);

}
