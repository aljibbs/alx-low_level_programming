#include "main.h"

/**
 * _sqrt_recursion - main funct
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrtRecur(n, 1));
}

/**
 * _sqrtRecur - _sqrt_recursion
 * @n: integer parameter
 * @i: integer parameter
 * Return: sqrtRecur
 */
int _sqrtRecur(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrtRecur(n, i + 1));
}
