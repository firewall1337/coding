#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int *cal;
	int n;
	printf("How many integers you want?\n");
	scanf("%d",&n)
;
	cal = (int *) calloc(n , sizeof(int));
	for (int i ; i < n; i++)
	{
		printf("%d\n",cal[i]);
	}
}