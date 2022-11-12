#include "main.h"
/**
 * Return the product of two numbers
 */
int multiplier(int a, int b) {
	return(a * b);
}

int main (int argc, char *argv[])
{
	int a, b, mult;

	a = strtol(argv[1],NULL,10);
	b = strtol(argv[2],NULL,10);
	mult = multiplier(a, b);
	printf("%d",mult);
	return 0;
}
