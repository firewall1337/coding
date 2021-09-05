#include <stdio.h>


struct vector 
{
	int x;
	int y;
};

void sumofvectors(struct vector v1 , struct vector v2)
{
	struct vector sum;
	sum.x = v1.x + v2.x;
	sum.y = v1.y + v2.y;
	printf("Sum of v1 and v2 vector is %d %d",sum.x,sum.y);
}

int main() 
{
	struct vector v1,v2,sum;
	v1.x = 34;
	v1.y = 54;
	v2.x = 31;
	v2.y = 53;

	sumofvectors(v1,v2);
	
}