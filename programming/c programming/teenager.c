#include <stdio.h>
int main()
{
	int a;
	printf("Tell Me Your Age : ");
	scanf("%d",&a);

/*	if (a > 12 && a < 20){
		printf("You are teenage");
	}
	else {
		printf("You are not a teenage");
	}
 */
(a > 12 && a < 20) ? printf("You are teenage") : printf("You are not a teenage");

}