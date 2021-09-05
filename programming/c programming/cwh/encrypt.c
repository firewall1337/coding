#include <stdio.h>

void encrypt(char *ptr)
{
	while ( *ptr != '\0' )
	{
		*ptr = *ptr - 1;
		printf("%s",ptr)
		ptr++;

	}
}



int main() 
{
	char s[] = "Bcij";
	encrypt(s);
	printf("%s",s);
}