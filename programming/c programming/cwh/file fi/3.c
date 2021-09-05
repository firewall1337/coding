#include <stdio.h>

int main() 
{
	FILE *ptr1,*ptr2;
	ptr1 = fopen("lawda.txt","r");
	ptr2= fopen("copied.txt","a");
	char c = fgetc(ptr1);
	while (c!=EOF)
	{
		fputc(c,ptr2);
		c = fgetc(ptr1);
	}
		while (c!=EOF)
	{
		fputc(c,ptr2);
		c = fgetc(ptr1);
	}
}