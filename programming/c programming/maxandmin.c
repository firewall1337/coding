#include <stdio.h>


int main()
{

	int a[100] , size ,i ,c , l = 0;

	printf("Enter how many you want to take:");
	scanf("%d",&size);

	printf("Enter the values:");

	for ( i = 0 ; i < size ; i++)
	{
		scanf("%d", &a[i]);
	}

	// for max
	for ( c = 0  ; c < size; c++)
	{
		if ( l < a[c] )
		{
			l = a[c];
		}
	}	
	
	printf("The Largest number is %d\n",l);

	// for min

	int min=0;
	for (int p = 1 ; p < size ; p++  )
	{
		if ( a[min] > a[p]  )
		{
			min = p;
		}

	} 
	printf("Smallest number is %d",a[min]);

}