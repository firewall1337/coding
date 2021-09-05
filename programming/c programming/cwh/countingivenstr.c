#include <stdio.h>

int count = 0;

int main() 
{
	char s[] = "aaaaaaaaabhi";
	char *ptr = s;
	while ( *ptr != '\0' )
	{
		if (*ptr == '3')
		{
			printf("yes i is present in string");
			break;
		}
		ptr++;
	}

}