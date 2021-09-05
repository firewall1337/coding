#include <stdio.h>

int main() 
{
	int a = 7, b =7;
	int ptr[a][b];
	int c = 4;
	for (int i=0; i < a ; i++)
	{
		for (int j = 0; j < b; j ++)
		{
			
			if (i == 0 || j ==0 || i == 6 || j == 6 )
			{
				printf("%d",c);
			}
			else 
			{
				printf(" ");
			}
		
		}
		printf("\n");
	}	

	}	
	
}