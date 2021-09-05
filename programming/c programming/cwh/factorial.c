#include <stdio.h>

int main() 
{
	int n , s = 1;
	printf("Enter a number to get factorial:");
	scanf("%d",&n);
	for(int i = 5 ; i ; i-- )
	{
		s = s * i;
	}
	printf("%d",s);
}

// another method

#include <stdio.h>

int main() 
{
	int n = 5 , s = 1;
	for (int i  = 1 ; i <=5 ; i++ )
	{
		s = s * i;
		printf("%d\n",s);
	}
	
}