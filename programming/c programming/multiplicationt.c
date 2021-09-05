#include <stdio.h>
int main()
{
	int a;

	printf("Multiplication table of > ");
	scanf("%d",&a);
	for ( int i =1;  i < 11; i++  )
	{

	printf(" %d X %d = %d \n",a,i,a*i);
	}

}