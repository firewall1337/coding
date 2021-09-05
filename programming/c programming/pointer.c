#include <stdio.h>
int main() 
{
	int o = 1337;
	int * p = &o; // you give the power to * p of o;
	* p = 45; // now you able to change the value of o by changing p value because it have power;s
	printf("\n%d",o);
	printf("\n%d");
	
}