#include <stdio.h>
int main()
{
	int cd , cm , cy , bd , bm , by;
	int m[] = { 31,29,31,30,31,30,31,31,30,31,30,31   };
	printf("Enter the current date:\n");
	scanf("%d",&cd);
	printf("Enter the current month:\n");
	scanf("%d",&cm);
	printf("Enter the current year:\n");
	scanf("%d",&cy);

	printf("Enter the birth date:");
	scanf("%d",&bd);
	printf("Enter the birth month:");
	scanf("%d",&bm);
	printf("Enter the birth year:");
	scanf("%d",&by);

	if (bd > cd){
		cd = cd + m[bm - 1] ;
		cm = cm - 1;
	}

	if (bm > cm){
		cm = cm + 12;
		cy = cy - 1;
	}



	int fd , fm , fy;
	fd = cd - bd;
	fm = cm - bm;
	fy = cy - by;

	printf("Years : %d \n Months: %d \n Days: %d \n",fy,fm,fd );


}