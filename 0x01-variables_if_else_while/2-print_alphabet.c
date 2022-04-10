#include <stdio.h>
#include <stdlib.h>
/* the rest of the headers goes here */
/**
 * main function to print alphabet letters
 * in lowwer case
 */
int main(void)/* this is the main function*/
	      /* return value of the function is 0*/
{
	int x = 'a';
	while (x <= 'z')

	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
