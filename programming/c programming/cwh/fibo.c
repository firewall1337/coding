#include <stdio.h>

int febo(int n);

int main() 
{
	int s;
	printf("upto which number you want fibo:> ");
	scanf("%d",&s);
	printf("%d",febo(s));
}

int febo(int n)
{
	if (n == 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else 
	{
		return febo(n - 1 )  + febo(n - 2);
	}
}