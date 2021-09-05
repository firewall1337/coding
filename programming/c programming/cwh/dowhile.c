#include <stdio.h>

int main() 
{
	int a,i = 1;
	printf("Enter a number:");
	scanf("%d",&a);
	do{
		printf("the value is:%d \n",i);
		i++;
	}
	while(i <= a);
}

// #include <stdio.h>

// int main() 
// {
// 	int a;
// 	printf("Enter a value: ");
// 	scanf("%d",&a);
// 	int i=1;
// 	while (i <= a)
// 	{
// 		if (i >= 10)
// 		{
// 			printf("value is: %d \n",i);
// 		}
// 		i++;
// 	}
// }
