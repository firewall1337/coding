#include <stdio.h>

int main() 
{
	FILE *ptr;
	int num;
	int num2;
	int num3;
	ptr = fopen("Abhishek.txt","r");
	fscanf(ptr,"%d",&num);
	fscanf(ptr,"%d",&num2);
	fscanf(ptr,"%d",&num3);
	printf("%d %d %d",num,num2,num3);

}