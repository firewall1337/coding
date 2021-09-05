#include <stdio.h>

void strcy( char *ptr , int n , char *ptr1 )
{
	int i=0;
	while(i <8)
	{
		ptr1[i] = ptr[i];
		i++;
	}
	ptr1[i] = '\0';
}

int main() 
{
	char st1[8]="morla";
	char str2[8];
	strcy(st1,8,str2);
	printf("%s",str2);
}