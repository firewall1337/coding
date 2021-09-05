#include <stdio.h>

int main() 
{
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
// by for loop
	for (int i = 1; i <= 10 ; i++)
	{
		printf("%d * %d = %d\n",num , i , num*i);
	}
}

#include <stdio.h>

int main() 
{
	int num , i =1;
	printf("Enter a number:\n");
	scanf("%d",&num);
// by while loop
	while (i <= 10)
	{
		printf("%d * %d = %d\n",num , i , num*i);
		i++;
	}
}


#include <stdio.h>

int main() 
{
	int num , i =1;
	printf("Enter a number:\n");
	scanf("%d",&num);
	// by do while loop
	do {
		printf("%d * %d = %d\n",num , i , num*i);
		i++;
	} 
	while (i <= 10);

}