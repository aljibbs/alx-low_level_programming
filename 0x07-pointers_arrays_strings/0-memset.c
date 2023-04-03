#include "main.h"
/**
 * _memset - ironnou
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	/* Loop through */
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	/* return the value of s */
	return (s);
}
