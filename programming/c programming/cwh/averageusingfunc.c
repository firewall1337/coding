#include <stdio.h>

float avg(int a , int b , int c);

int main() 
{
	int x , y , lawda;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&lawda);
	printf("%.2f",avg (x,y,lawda));
}

float avg(int a , int b , int c )
{
	float res ;
	res = (float)(a + b + c) / 3 ;
	return res;
}