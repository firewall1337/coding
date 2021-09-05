#include <stdio.h>

int salary,workdays,ms;
char name[20],doj[20],d[10],dept[20];
int emp_id;
unsigned long cnum;

void calc_salary()
{
	ms=salary/30*workdays;
}

void display()
{
	int deduct;
	printf("\n\nMonthly Salary of %s is: %d",name,ms);
	printf("\n\nEnter the deductions of salary if any() :");
	scanf("%d",&deduct);
	ms=ms-deduct;
	printf("\nMonthly salary of %s is :%d",name,ms);
}

void input_data()
{
	printf("Enter name of the Employee: ");
	scanf("%[^\n]%*c",&name);
	printf("Enter emp_id of the Employee:");
	scanf("%d",&emp_id);
	printf("Enter number of working days: ");
	scanf("%d",&workdays);
	printf("Enter Date of joining:");
	scanf("%s",&doj);
	printf("Enter salary:");
	scanf("%d",&salary);
	printf("Enter contact num :");
	scanf("%lu",&cnum);
	printf("Enter Desgination:");
	scanf("%s",&d);
	printf("Enter department:");
	scanf("%s",&dept);

	printf("\nName is: %s",name);
	printf("\nEmployee ID is: %d",emp_id);
	printf("\nNumber of working days are: %d",workdays);
	printf("\nDate of joining: %s",doj);
	printf("\nSalary: %d",salary);
	printf("\nContact Number: %lu",cnum);
	printf("\nDesgination: %s",d);
	printf("\nDepartment: %s\n",dept);
}

int main() 
{
	input_data();
	calc_salary();
	display();
}