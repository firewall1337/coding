#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int guessnumber;
int randomnum;
int is;
int count = 1;

void wel()
{
    printf("\nWelcome to number guessing game.........!\n");
	printf("\nGuess a Number (1 -100) : ");
	scanf("%d",&guessnumber);
}

void ran()
{
	srand(time(NULL));
	randomnum = (rand() % 10) + 1;
}

int main()
{
	wel();
	ran();

	_Bool is = true;
	while (is) 
	{
		if (randomnum > guessnumber) 
		{
			count++;
			printf("Correct answer is greater than your guess : ");
			scanf("%d",&guessnumber);
			
		}

		else if (randomnum <guessnumber)
		{
			count++;
			printf("Correct answer is lesser than your guess : ");
			scanf("%d",&guessnumber);

		}

		else 
		{
			printf("\nCongrats You guess the correct answer in %d attempts!!!!!! \n\n",count);
			break;
			
            
         }

}
}