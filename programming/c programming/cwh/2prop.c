#include <stdio.h>

int pointer(int a);

int main() 
{
	int i = 4;
	int *ptr;
	ptr = &i;
	printf("The address of i is %u\n",ptr);	
	pointer(i);
	printf("The value of i is %d\n",*ptr);	
}

int pointer(int a)
{	
	printf("The address of a in function is %u\n",&a);
	return 0;
}