#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Program for randomize a digit
 * Return: return 0
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("\nis positive");
	}
	else if (n == 0)
	{
		printf("\nis zero");
	}
	else if (n < 0)
	{
		printf("\nis negative");
	}
	return (0);
}
