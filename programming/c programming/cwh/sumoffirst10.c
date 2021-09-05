#include <stdio.h>

// while loop
int main() 
{
	int i = 0 , a ;
	printf("sum of first 10 natural numbers\n");
	while(i < 10)
	{
		i++;
		a = a + i ;
	}
	printf("%d ",a);

}

// for loop

#include <stdio.h>

int main() 
{
	int  a ;
	printf("sum of first 10 natural numbers\n");
	for (int i=1; i <= 10; i++)
	{
		a = a + i;

	}
		printf("%d\t",a);

}


// do while 
#include <stdio.h>

int main() 
{
	int  i ,a ;
	printf("sum of first 10 natural numbers\n");
	do 
	{
		a = a + i;
		i++;
		printf("%d\n",a);
		
	}
	while (i <= 10);

	printf("%d",a);

}

