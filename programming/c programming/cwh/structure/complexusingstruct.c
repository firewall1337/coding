#include <stdio.h>

	typedef struct complex
	{
		int real;
		int complex;
	} comp;

void dislapy(comp c)
{
	printf("%d %d\n",c.real,c.complex);
}
int main() 
{
	comp cnums[5];
	for(int i = 0; i <5 ; i++)
	{
		printf("Enter real and complex of %d vector : ",i+1);
		scanf("%d",&cnums[i].real);
		scanf("%d",&cnums[i].complex);
	}
	for(int i = 0; i <5 ; i++)
	{
		dislapy(cnums[i]);
	
	}

}