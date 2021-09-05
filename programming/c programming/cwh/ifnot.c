#include <stdio.h>

int main() 
{
	char str;
	printf("enter the string \n");
	scanf("%c",&str);

	if (str >= 'a' && str <= 'z')
	{
		printf("entered character is lower");
	}
	else 
	{
		printf("not lowert");
	}
	
}