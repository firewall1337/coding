#include <stdio.h>

int main() 
{
	FILE *ptr;
	ptr = fopen("table.txt","w");
	int n= 5;
	for (int i = 1 ; i<11; i++)
	{
		fprintf(ptr , "%d X %d = %d\n",n,i,n*i);
	}
	fclose(ptr);
}