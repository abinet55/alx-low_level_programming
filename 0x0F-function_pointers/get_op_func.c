#include "3-calc.h"

/**
* get_op_func - selects the correct function
* @s: char operator
* Return: pointer to the function
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int x = 0;
while (x < 10)
{
if (s[0] == ops->op[x])
break;
x++;
}
return (ops[x / 2].f);
}
