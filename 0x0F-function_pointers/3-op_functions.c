#include "calc.h"
/**
* op_add - adds two numbers
* @a: input 1
* @b: input 2
* Return: returns integer
*/

int op_add(int a, int b)
{
int sum = a + b;
return(sum);
}
/**
* op_sub - subtract two numbers
* @a: input 1
* @b: input 2
* Return: returns integer
*/

int op_sub(int a, int b)
{
int sub = a - b;
return(sub);
}

/**
* op_mul - multplies two numbers
* @a: input 1
* @b: input 2
* Return: returns integer
*/

int op_mul(int a, int b)
{
int mul = a * b;
return(mul);
}

/**
* op_div - divide two numbers
* @a: input 1
* @b: input 2
* Returns: returns integer
*/

int op_div(int a, int b)
{
int div = a / b;
return(div);
}

/**
* op_mod - gives module
* @a: input 1
* @b: input 2
* Return: returns integer
*/

int op_mod(int a, int b)
{
int mod = a % b;
return(mod);
}
