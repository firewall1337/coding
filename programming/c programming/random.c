
#include <stdio.h>


void not_eligible(float *cgpaptr,int size,char *nameptr)
{

			if ( cgpaptr[0] <= 8 )
				{
					printf("Student : %s and cgpa : %f not elgilble ",nameptr,cgpaptr);
				}
	
}



int main() 
{
	int n;
	char name[100];
	char *ptrtoname = name;
	float ssm[100];
	float *ptrtocgpa = ssm;
	int i,j;
	printf("Enter number of students: ");
	scanf("%d",&n);
	for (i=0; i < n; i++)
	{
		printf("%d. Enter Student name- \n",i+1);
		scanf("%s",name);
		for( j = 0 ; j < 5;j++)
		{
			printf("Enter CGPA (0-10) in %d sem is: ",j+1);
			scanf("%f",&ssm[j]);
		}
	}
	

	for (i=0; i < n; i++)
	{
		printf("%d. Student name-\n",i+1);
		for( j = 0 ; j < 11;j++)
		{
			printf("CGPA (0-10) in %d sem is: %2.f\n",j+1,ptrtocgpa[j]);
		}
	}
	not_eligible(&ptrtocgpa[0],n,&ptrtoname[0]);
	
	
}