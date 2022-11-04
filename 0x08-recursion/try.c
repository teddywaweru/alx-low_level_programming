#include <stdio.h>

void do_sth(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; )
	{
		
		i++;
		printf("%d", *s);
	}
}

int main()
{
	do_sth("some_string.");
	return (0);
}

