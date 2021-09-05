#include <stdio.h>

int main() 
{
	char abhi[] = "Abhishek";
	char *ptr = abhi;
	for (int i = 0 ; i < 8;i++)
	{
		printf("\n%c\n",abhi[i]);
	}

	while(*ptr != '\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
}