#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	/* check condition */
	if (n < 0)
	{
		/* return value */
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	/* return the factorial */
	return (n * factorial(n - 1));
}
