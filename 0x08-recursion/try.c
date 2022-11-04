#include <stdio.h>

void do_sth(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; )
	{
		
		i++;
		printf("%s", ++s);
		printf("\n");
	}
}

int main()
{
	do_sth("some_striefnoening.");
	return (0);
}

