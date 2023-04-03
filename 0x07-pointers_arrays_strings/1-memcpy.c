#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* declare variables */
	/* variable r */
	int r = 0;

	/* variable i */
	int i = n;

	/* Loop through */
	for (; r < i; r++)
	{
		/* replace value of position r in dest with value of position r in src */
		dest[r] = src[r];

		/* reduce n by 1 */
		n--;
	}

	/* return dest */
	return (dest);
}
