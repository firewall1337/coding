#include <stdio.h>

int main()
{

	int a[20];
	int p = sizeof(a)/sizeof(a[0]); // 1 integer is 4 bytes

	printf("Size of this array is %lu",p);
}
