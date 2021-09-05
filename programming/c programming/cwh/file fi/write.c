#include <stdio.h>

int main() 
{
	FILE *ptr;
	int num = 3;
	ptr = fopen("generated.txt","w");
	fprintf(ptr, "Are lawda %d",num);
	fclose(ptr);
}