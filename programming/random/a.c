#include <stdio.h>
int n;
float a[100],i,mean,sum=0;
float amean();

int main()
{
	printf("Enter number of terms ");
	scanf("%d",&n);
	printf("Enter %d values: >  ",n);
	printf("\n\nArithmetic Mean = %f \n\n",amean());
}

float amean()
{
	for(int i=1;i<=n;i++)
	{
 	scanf("%f",&a[i]);
 	sum=sum+a[i];
	}
	mean=sum/n;
	return mean;
}