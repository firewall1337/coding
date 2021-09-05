#include <stdio.h>

int main() 
{
	int	mul[10];
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);

	for (int i = 1 ; i <= 10 ; i++)
	{
		printf("%d X %d = %d",n,i,mul[i]);
	}
	for (int i = 1 ; i <= 10 ; i++)
	{
		printf("%d X %d = %d\n",n,i,mul[i]);
	}
}