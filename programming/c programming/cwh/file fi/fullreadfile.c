#include <stdio.h>

int main() 
{
	FILE *lawda;
	lawda = fopen("generated.txt","r");
	char c;
	c = fgetc(lawda);
	printf("%c\n\n",c);
	while(c!=EOF)
	{
		printf("%c",c);
		c = fgetc(lawda);
	}

}