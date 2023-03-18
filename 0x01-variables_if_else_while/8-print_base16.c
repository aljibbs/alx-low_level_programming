#include <stdio.h>

/* more headers goes there */
/**
 * main - Main function
 * Return: Success
 */
/* betty style doc for function main goes there */

int main(void)
{
	int d;
	char val;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}

	for (val = 'a'; val <= 'f'; val++)
	{
		putchar(val);
		putchar('\n');
	}
	return (0);
}
