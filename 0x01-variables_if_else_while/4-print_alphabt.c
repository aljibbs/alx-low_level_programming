#include <stdio.h>

/* more headers goes there */
/**
 * main - Main function
 * Return: Success
 */
/* betty style doc for function main goes there */

int main(void)
{
	char val, e, q;

	e = 'e';
	q = 'q';

	for (val = 'a'; val <= 'z'; val++)
	{
		if (val != e && val != q)
		{
			putchar(val);
		}
	}
	putchar('\n');
	return (0);
}
