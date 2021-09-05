#include<stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	ptr = (int * ) malloc(6* sizeof(int));
	for (int i=0 ; i < 6 ; i++)
	{
		printf("Enter the value in %d : ",i);
		scanf("%d",&ptr[i]);
	}
	for (int i=0 ; i < 6 ; i++)
	{
		printf("the value in %d is %d\n",i,ptr[i]);
	}
	printf("Using realloacte to get the values of size of 3\n");

	ptr = realloc(ptr,3*sizeof(int));
	for (int i=0 ; i < 10 ; i++)
	{
		printf("Enter the value in %d : ",i+1);
		scanf("%d",&ptr[i]);
	}
	for (int i =0; i < 10 ; i++)
	{
		printf("the value in %d is %d\n",i,ptr[i]);
	}
	return 0;
}
