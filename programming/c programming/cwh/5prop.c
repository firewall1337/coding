#include <stdio.h>

int main() 
{
	int abhishek = 1337;
	int *abhishekkaaddr;
	int **abhishekkaaddkaaddr;
	abhishekkaaddr = &abhishek;
	abhishekkaaddkaaddr = &abhishekkaaddr;
	printf("The value of i is %d \n",*abhishekkaaddr);

}