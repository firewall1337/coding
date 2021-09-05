#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n;
void gennum()
{
	srand(time(0));
	n = rand() % 10 + 1  ;
}

int main() 
{
	gennum();
	int a , s = 1;
	printf("Welcome to Number Guessing game!\n\n");
	printf("Guess a number between 1 to 100:\n");
	scanf("%d",&a);
	while ( a != n)
	{ 
		if (a > n)
	{
		printf("Lower number please ");
		scanf("%d",&a);
	
		s++;
	}
	else if (a < n)
	{
		printf("Higher Number please > ");
		scanf("%d",&a);
		s++;
	}
	else if (a == n)
	{
		printf("\nCongrats you choose the guess the correct number!\n");

	}
	else 
	{
		printf("wrong answer !");
	}
	}
	printf("\nYou guess the correct answer in %d times\n",s);
	
	
}


// int main ()
// {
// 	int n , g , gn = 1;
// 	srand(time(0));
// 	n = rand() % 10 + 1 ;

// 	do {
// 		printf("Guess the number: \n");
// 		scanf("%d",&g);
// 		if (g > n)
// 		{
// 			printf("Lower number please: > ");
// 		}
// 		else if (g < n)
// 		{
// 			printf("Higher Number please > ");
// 		}
// 		else 
// 		{
// 			printf("You guessed it correct ! and in %d times ",gn);
// 		}
// 		gn++;
// 	}
// 	while (n != g );
// }