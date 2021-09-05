#include <stdio.h>

int main() 
{
	int arr[3][4][5];
	for ( int i = 1; i <= 3; i++ )
	{
		for ( int j = 1; j <= 4; j++ )
		{
				for ( int k = 1; k <= 5; k++ )
					{	
						printf("address of arr[%d][%d][%d] are %u\n ",i,j,k,&arr[i][j][k]);
					}
		}
	}
}