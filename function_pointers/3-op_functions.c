#include "3-calc.h"
/**
 * op_add - the function that will be called if argv[2] = +
 * @a : the first integer to calculate
 * @b : the second integer to calculate
 * Description: returning the result of the addition between the integer a & b
 *
 * Return: the operation of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - the function that will be called if argv[2] = -
 * @a : the first integer to calculate
 * @b : the second integer to calculate
 * Description: returning the result of the substraction
 * between the integer a & b
 *
 * Return: the operation of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the function that will be called if argv[2] = *
 * @a : the first integer to calculate
 * @b : the second integer to calculate
 * Description: returning the result of the multiplication
 * between the integer a & b
 *
 * Return: the operation of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - the function that will be called if argv[2] = /
 * @a : the first integer to calculate
 * @b : the second integer to calculate
 * Description: returning the result of the division between the integer a & b
 *
 * Return: the operation of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - the function that will be called if argv[2] = %
 * @a : the first integer to calculate
 * @b : the second integer to calculate
 * Description: returning the result of the modulo between the integer a & b
 *
 * Return: the operation of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
