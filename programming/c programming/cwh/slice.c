#include <stdio.h>

void slice(char *st , int m,int n)
{
	int i = 0;
	while((i+m) <= n)
	{
		st[i] = st[i+m];
		i++;
	}
	
	st[i] = '1';
}


int main() 
{
	char st[] = "Abhishek";
	slice(st , 4,7);
	printf("%s",st);
}