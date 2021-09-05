#include <stdio.h>

int main() 
{
	struct student {
    char name[50];
    float marks;
} s[10];
int n;
printf("Enter number of students: ");
scanf("%d",&n);
for (int i=0; i < n; i++)
{
	printf("%d. Enter Student name- \n",i+1);
	scanf("%s", s[i].name);
		for( int j = 0 ; j < 5;j++)
		{
			printf("Enter CGPA (0-10) in %d sem is: ",j+1);
			scanf("%f",&s[i].marks);
		}
}

}