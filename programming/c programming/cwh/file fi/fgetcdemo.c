#include <stdio.h>

int main() 
{
	FILE *ptr,*ptr2;
	ptr = fopen("fgetc.txt","r");
	ptr2 = fopen("fputc.txt","w");


	printf("the value is %c",fgetc(ptr));
	fputc('A',ptr2);
		fputc('A',ptr2);
	fclose(ptr);
}