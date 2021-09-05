#include <stdio.h>

int i=0, n=1;
union PatientU{
   char name[10];
   int pid;
   char group [2];
   long long int contact;
   char disease[10];
   int DOA;
}patientu[5];

struct PatientS{
   char name[10];
   int pid;
   char group [2];
   long long int contact;
   char disease[10];
   int DOA;
}patients[5];


void addusingunions() {
for(i=0; i<n; i++) 
{
   printf("\t Patient name =");
   scanf("%s", patientu[i].name);
   printf("\t Patient ID =");
   scanf("%d", &patientu[i].pid);
   printf("\t Blood Group =");
   scanf("%s", patientu[i].group);
   printf("\t Contact =");
   scanf("%11d", &patientu[i].contact);
   printf("\t Disease =");
   scanf("%s", patientu[i].disease);
   printf("\t Date of Admission =");
   scanf("%d", &patientu[i].DOA);
}
}


void addusingstruct() {
for(i=0; i<n; i++) 
{
   printf("\t Patient name =");
   scanf("%s", patients[i].name);
   printf("\t Patient ID =");
   scanf("%d", &patients[i].pid);
   printf("\t Blood Group =");
   scanf("%s", patients[i].group);
   printf("\t Contact =");
   scanf("%11d", &patients[i].contact);
   printf("\t Disease =");
   scanf("%s", patients[i].disease);
   printf("\t Date of Admission =");
   scanf("%d", &patients[i].DOA);
}
}
void recordofunions() 
{
   printf(" Patient Record: \n\n");
   for(i=0; i<n; i++)
   {
      printf("\t Patient name = %s\n", patientu[i].name);
      printf("\t Patient ID = %d\n", patientu[i].pid);
      printf("\t Blood Group = %s\n", patientu[i].group);
      printf("\t Contact = %11d\n", patientu[i].contact);
      printf("\t Disease = %s\n", patientu[i].disease);
      printf("\t Date of Admission = %d\n", patientu[i].DOA);
   }
}

void recordofstruct() 
{
   printf(" Patient Record: \n\n");
   for(i=0; i<n; i++)
   {
      printf("\t Patient name = %s\n", patients[i].name);
      printf("\t Patient ID = %d\n", patients[i].pid);
      printf("\t Blood Group = %s\n", patients[i].group);
      printf("\t Contact = %11d\n", patients[i].contact);
      printf("\t Disease = %s\n", patients[i].disease);
      printf("\t Date of Admission = %d\n", patients[i].DOA);
   }
}
int main() 
{
printf("\n\n***Usings Unions*\n\n");
addusingunions();
recordofunions();
printf("\n\n***Usings Structure*\n\n");
addusingstruct();
recordofstruct();
printf("size of Unions in bytes : %d\n", sizeof(patientu));
printf("size of Structure in bytes : %d\n", sizeof(patients));
return 0;
}