#include <stdio.h>
#include <string.h>

int main() 
{
	
	struct ab
	{
		char w[20];
		float f;
		int s;
		
	};

	struct ab a1 , a2 ;
	strcpy(a1.w, "Abhishek");
	a1.s = 100;
	a1.f = 10.5;
	
	strcpy(a2.w, "Morla");
	a2.s = 1000;
	a2.f = 10.51;

	printf("Name of Candidate : %s\n Name of 1Candidate : %s \n", a1.w,a2.w);
	printf("Value Of float : %f\n Value OF 1float %f \n", a1.f,a2.f);
	printf("Name of int : %d\n Name OF 2int %d \n", a1.s, a2.s);

}