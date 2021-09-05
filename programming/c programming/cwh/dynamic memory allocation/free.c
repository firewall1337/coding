#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int *ptr;
	int *ptr1;

	for (int i ; i < 6; i++)
	{
		ptr1 = (int *)malloc(6000*sizeof(int));
		printf("Enter %d elements in %d is : \n",i,ptr1[i]);
		scanf("%d",&ptr1[i]);
		free(ptr1);
	}

}
