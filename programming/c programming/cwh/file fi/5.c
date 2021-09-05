#include <stdio.h>

int main() 
{
	FILE *pt1 = fopen("first.txt","w");
	int n ;
	scanf("%d",&n);
	fprintf(pt1,"%d",n*2);
}