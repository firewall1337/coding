#include <stdio.h>

float gd(float s, float per)
{
	float a = (s/100) * per;
	return s-a;


}

int main()


{
	printf("Your discount : %.2f",gd(2000,50));

}

