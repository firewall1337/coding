#include <stdio.h>
int main()
{
	int a;
    FILE *in;
    in = fopen("tables.txt","a+");
	printf("Multiplication table of > ");
	scanf("%d",&a);
    
    fprintf(in,"====%d====\n",a);
	for ( int i =1;  i < 11; i++  )
	{

	fprintf(in,"%d X %d = %d \n",a,i,a*i);

	}
    fclose(in);

}