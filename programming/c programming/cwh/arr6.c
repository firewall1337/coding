#include <stdio.h>

int main() 
{
	int size;
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	int s[size];
	int count =0;
	for (int i = 0 ; i < size ; i++)
	{
		printf("element at index is %d: ",i+1);
		scanf("%d",&s[i]);
	}
	for (int i = 0 ; i < size ; i++)
	{
		if (s[i] > 0)
		{
			count++;
		}
	}

	printf("\n\nTotal numbers of +ve numbers are %d",count);
}