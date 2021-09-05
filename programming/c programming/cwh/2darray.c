#include <stdio.h>


int main() 
{
	int i,j;
	printf("Enter i: ");
	scanf("%d",&i);
	printf("Enter j : ");
	scanf("%d",&j);
	printf("Enter the value of i and j:\n");
	int m[i][j];
	for (int s=0;s < i; s++)
	{
		for(int d=0; d < j ; d++)
		{
			printf("Enter the values of i %d in and %d :",s+1,d+1);
			scanf("%d",&m[s][d]);
		}
	}
	
		for (int s=0;s < i; s++)
	{
		for(int d=0; d < j ; d++)
		{
			printf("%d",m[s][d]);
		}
	}


}