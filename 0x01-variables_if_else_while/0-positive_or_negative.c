#include <stdio.h>
#include <time.h>
/* more headers goes there */
#include <stdlib.h>

/* betty style doc for function main goes there */
/**
 *The main function involves taking a random number and checking
 *whether it is positive, negative or a zero
 */
int main(void)/*This is the main function*/
	      /*The return value of main is 0*/
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
