#include <stdio.h>
void wrongswap(int a , int b);

void swap(int *a , int *b);

int main() 
{
	int x = 3 , y = 4; 
	printf("The value of x and y is %d and %d\n",x , y);
	printf("After swap\n");
	wrongswap(x , y);
	swap(&x , &y);
	printf("The value of x and y is %d and %d\n",x,y);

}

void wrongswap(int a , int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap(int *a , int *b)
{

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}