#include<stdio.h>
struct student
{
char sn[20];
float mstm1,mstm2;
int tl, al;
};
int main()
{
int n,i;
printf("Enter total no of students\n");
scanf("%d",&n);
struct student s[n];
for(i=0; i<n;i++)
{
printf("Enter name of student\n");
scanf("%s", s[i].sn);
printf("Enter msti and mst2 marks\n");
scanf("%f%f",&s[i].mstm1,&s[i].mstm2);
printf("Enter total lectures and attended lectures\n");
scanf("%d%d",&s[i].tl,&s[i].al);
}
int flag=0;
for( i=0;i<n;i++)
{
float avg_marks= (s[i].mstm1+s[i].mstm2)/2;
float attendance_pre= (float)s[i].al/s[i].tl;
if(avg_marks<80.0f && attendance_pre<0.757 )
{ 
	flag+=1;
	if(flag==1)
		printf("List of Detained Students:\n");
		printf("%s\n",s[i].sn);
}
}
if (flag ==0)
{
	printf("No Student detained");
}
}