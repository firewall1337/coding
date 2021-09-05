#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int *m, int n, char g) 
{
	for(int i=0;i < n;i++)
	{
		scanf("%d",&m[i]);
	}
	scanf("%s",&g);
	for(int i=0;i < n;i++)
	{
		printf("%d",m[i]+m[n-1]);
		break;
	}
}

int main() 
{
	int marks[100];
	int n;
	char s;
	scanf("%d",&n);
	marks_summation(marks,n,s);

}