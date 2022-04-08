#include <stdio.h>

int main(void)
{
	long long int x;
	float y;
	printf("size of a char: %hhu byte(s)\n",sizeof(char));
	printf("size of an int: %d byte(s)\n",sizeof(int));
	printf("size of a long inti: %ld byte(s)\n",sizeof(long int));
	printf("size of a long long int: %d byte(s)\n",sizeof(x));
	printf("size of a float: %d byte(s)\n",sizeof(y));
	return (0);
}
