#include <stdio.h>

int main() 
{
	int n=8 , i = 1 , p , s = 0 ;
	while (i <= 10)
	{
		p = n*i;
		printf("%d * %d = %d\n",n , i , p);
		s = s + p;
		i++;
		
	}
	printf("\n%d\n",s);
}