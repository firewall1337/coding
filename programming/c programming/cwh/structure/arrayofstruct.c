#include <stdio.h>
#include <string.h>

struct employee
	{
		int code;
		float sal;
		char name[10];
	};

void show(struct employee asd)
{
	printf("\n%d\n",asd.code);
	printf("\ncall by function :%.2f\n",asd.sal);
	asd.sal = 1337.1;
}


int main() 
{
	

	struct employee e1,e2;
	//or
	struct employee facebook[100];
	// or
	struct employee Abhishek = { 100 , 23.25, "Morla" };
	facebook[0].code = 100;
	facebook[0].sal = 101.45;
	strcpy(facebook[0].name,"Abhishek");
	e1.code = 200;
	printf("%d\n",facebook[0].code);
	printf("%f\n",facebook[0].sal);
	printf("%s\n",facebook[0].name);
	printf("\n%d\n",e1.code);
	printf("code is %d \n",Abhishek.code);
	printf("salary is %f \n",Abhishek.sal);
	printf("name is %s \n",Abhishek.name);

	struct employee alpha;
	struct employee *ptr;
	ptr = &alpha;

	(*ptr).code = 100;
	//or
	ptr->sal =  123.34;

	show(alpha);
	printf("\n after function :%.2f\n",alpha.sal);

}