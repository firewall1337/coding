#include <stdio.h>

int main() 
{
	struct employee 
	{
		int code;
		float sal;
		char name;
	};

	struct employee e1,e2,e3;
	printf("Enter the details of employee 1\n");
	printf("enter code: ");
	scanf("%d",&e1.code);
	printf("Enter salaray; ");
	scanf("%f",&e1.sal);
	printf("Enter name: ");
	scanf("%s",e1.name);
	printf("name code and salary of employee 1 is %s %d %.2f",e1.name,e1.code , e1.sal);
}