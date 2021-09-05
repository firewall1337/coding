#include <stdio.h>

int sum(int n);

int main() 
{
	int s;
	printf("Enter n to add:");
	scanf("%d",&s);
	printf("%d",sum(s));
}

int sum(int n )
{
	if (n == 1 )
	{
		return 1;
	}
	else 
	{
		return sum(n-1) + n; 
	}
}