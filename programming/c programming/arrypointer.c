#include <stdio.h>

int main() 
{
	int x[3] = {12,13,14};
	
	int *p= &x[1];
	printf("%d\n",*p);
	int *p1 = x + 2;
	printf("%d\n",*p1);
	int ptr = x[1];
	printf("%d\n",ptr);
	int ptr1 = *(x+2);
	printf("%d",ptr1); 

}
