#include <stdio.h>

int main() 
{
	int n;
	printf("Enter:");
	scanf("%d",&n);
	int k = 1;
	for (int i =1 ; i <=n; i++ )
	{
		
		for(int j= 1; j <= k ; j++)
		{
			printf("*");
		}
		k = k +2;
		printf("\n");
	}
}