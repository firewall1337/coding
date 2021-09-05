#include <stdio.h>
int main()
{
	int a ,b ,c;
	scanf("%d %d",&a,&b);
	c = a; // c = 20
	a = b; // a = 10
	b = c; // b = 20
	printf("%d \n %d",a,b);

}