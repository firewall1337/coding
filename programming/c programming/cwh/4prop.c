#include <stdio.h>

void sumavg(int a, int b)
{
	int *sum;
	*sum = a+b;
	float *avg;
	*avg = (float)(*sum)/2;
}


int main() 
{
	int sum;
	float avg;
	int x = 2;
	int y = 3;
	sumavg(x,y);
	printf("The sum is %d\n and avg is %d\n",sum,avg);
}