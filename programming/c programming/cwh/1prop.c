#include <stdio.h>

int main() 
{
	int a;
	printf("Enter any value in that variable : \n");
	scanf("%d",&a);
	int *i;
	i = &a;
	printf("The address of variable 'a' is %u \n",i);
	printf("The address of variable 'a' is %u \n",&a);
	printf("The Value of variable 'a' is %d \n",*i);

}