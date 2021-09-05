#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int *cal;
	cal = (int *) calloc(6 , sizeof(int));

	for (int i ; i < 6; i++)
	{
		printf("%d\n",cal[i]);
	}
}