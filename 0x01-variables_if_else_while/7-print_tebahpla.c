#include <stdio.h>

/* more headers goes there */
/**
 * main - Main function
 * Return: Success
 */
/* betty style doc for function main goes there */

int main(void)
{
	char val;

	for (val = 'z'; val >= 'a'; val--)
	{
		putchar(val);
		putchar('\n');
	}
	return (0);
}
