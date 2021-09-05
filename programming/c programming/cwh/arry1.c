#include <stdio.h>

int main() 
{
	int ar[10] = {21,12,45,78,98,54,65,12,32,45};
	int *ptr = ar;
	ptr = ptr+ 2;
	if (ptr == &ar[2])
	{
		printf("%u\n",ptr);
		printf("%u\n",&ar[2]);
		printf("They are equal");
	}
}