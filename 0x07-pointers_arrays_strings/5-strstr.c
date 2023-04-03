#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		/* Looping */
		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		/* conditional check */
		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
