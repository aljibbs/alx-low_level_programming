#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - Main function for the program */

/**
 * main - function
 * Return: Always (Success)
 *
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
