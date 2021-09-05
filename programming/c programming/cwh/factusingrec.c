#include <stdio.h>

int fact(int x);

int main() 
{
	printf("Factorial is %d", fact(5));
}

int fact(int x)
{
	if (x == 1  || x == 0 )
	{
		return 1;
	}
	else 
	{
		return fact(x-1) * x;
	}

}