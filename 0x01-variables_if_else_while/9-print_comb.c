#include <stdio.h>

/* more headers goes there */
/**
 * main - Main function
 * Return: Success
 */
/* betty style doc for function main goes there */

int main(void)
{
	int val;

	for (val = '0'; val <= '9'; val++)
	{
		putchar(val);

		if (val != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
