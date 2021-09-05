#include <stdio.h>




int Update_balace(int *ptr,int size)
{
   for ( int c = 0 ; c < size ; c++ )
   {
      if ( ptr[c] == 0 )    
      {
         printf("Amount is credited to person %d\n", c+1);
		 printf("Amount credited is 1000\n");
      }
   }
}

int main()

{
int n;
printf("Enter number of persons :");
scanf("%d",&n);
int bankbalance[10];
int *a = bankbalance;
for (int i = 0; i < n ; i++)
{
	printf("Enter current amount of person %d in account is -: ",i+1);
	scanf("%d",&bankbalance[i]);
}
Update_balace(&a[0],n);


}