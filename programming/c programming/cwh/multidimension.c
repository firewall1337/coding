#include <stdio.h>

// concepts of two dimensional array.

int main()
{
	int m[3][5];
	for (int i=0; i < 2; i++)
	{
			for (int j=0; j < 5; j++)
				{
					printf("Enter the marks of students %d in subjects %d :",i+1,j+1);
					scanf("%d",&m[i][j]);
				}
	}

		for (int i=0; i < 2; i++)
	{
			for (int j=0; j < 5; j++)
				{
					printf("the marks of student %d in subject %d is %d\n",i+1,j+1,m[i][j]);
			
				}
	}
}