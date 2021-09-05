#include <stdio.h>
int main()
{	
	int n,k=1;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	for (int i = 1;i <= n; i++ )
	{
	
		for (int j = 1; j <= k; j++)
		{
			printf("*");
			
		}	
		k =k+2;
			printf("\n");
		
		
		
	}
}