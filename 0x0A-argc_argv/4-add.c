#include "main.h"
/**
 * add positive numbers only
 */
int main (int argc, char *argv[])
{
	int count = 1, sum = 0;
	
	if (argc <= 1) {
		printf("0");
		printf("\n");
		return(0);
	}

	while(count < argc) {
		if (!strtol(argv[count],NULL,10)){
			printf("Error");
			printf("\n");
			return 1;
		} else {
			sum += strtol(argv[count],NULL,10);
			count++;
		}
		
	}
	printf("%d",sum);
	printf("\n");
	return 0;
}
