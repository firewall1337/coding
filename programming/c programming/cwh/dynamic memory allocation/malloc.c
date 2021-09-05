#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int *s;
	s = (int *)malloc(6 * sizeof(int));
	int ar[10];

	for (int i; i < 6 ; i++)
	{	
		printf("Enter the value of %d elements : ",i);
		scanf("%d",&s[i]);
	}
		for (int i; i < 6 ; i++)
	{
		printf("The value of %d elements is %d  \n",i,s[i]);
	}

	
}