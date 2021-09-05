#include <stdio.h>

int ten();

int main() 
{
	int lawda = 1337;
	ten(lawda);

}

int ten(int *a)
{
	int b=234236;
	a = &b;
	return *a;
}