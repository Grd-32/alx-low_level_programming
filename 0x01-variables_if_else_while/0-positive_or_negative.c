#include <stdio.h>
#include <time.h>
/* more headers goes there */
#include <stdlib.h>

/* betty style doc for function main goes there */
/**
 * main function (@intmain) to find out whether a number is positive
 * negative
 * or just a zero
 */
int main(void)/*This is the main function*/
	      /*This function returns nothing*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
