#include <stdio.h>

int main() 
{
	FILE *ptr1;
	char s1[100],s2[100];
	ptr1 = fopen("output.txt","w");
	printf("Enter a name and money 1: ");
	scanf("%[^\n]*s",s1);
	printf("Enter a name and money 2: ");
	getchar();
	scanf("%[^\n]*s",s2);
	fprintf(ptr1, "%s\n%s",s1 ,s2);
}