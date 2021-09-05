#include <stdio.h>

void printar(int n , int *ptr)
{
	for (int i =0 ; i < n ; i++)
	{
		printf("the values of ar is : %d\n",*(ptr + i)); // * gives you the exact values of the array													// 
	}
	
}
int main()
	{
		int ar[] = {1,2,3,4,123};
		printar(5 , ar);
	}


