#include <stdio.h>

int main() 
{
	int m[4];
	int *ptr = m;
	 // ptr = &m[0];
	printf("%u\n",ptr);
	for (int i = 0 ; i < 4;i++)
	{
		printf("Enter the value of %d ",i+1);
		scanf("%d",ptr);
		ptr++;
	}
	for (int i = 0 ; i < 4;i++)
	{
		printf("the value of %d \n",m[i]);
	}
	
	
}