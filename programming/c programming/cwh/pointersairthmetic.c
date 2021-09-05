#include <stdio.h>

int main() 
{
	int x;
	int i=8;
	int *ptr = &i;
	int *ptr1 = &i;
	printf("%u\n",ptr);
	printf("%u\n",ptr1);
	ptr++;
	printf("After adding 2 %u\n",ptr);
	x = ptr - ptr1;
	printf("%d",x);
}