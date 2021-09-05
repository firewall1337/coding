#include <stdio.h>

char mystr[301] ;

void converttolower()
{
	for (size_t i = 0 ; mystr[i] != '\0'; i++)
	{
		if ( mystr[i] >=65 && mystr[i] <=90  )
		{
		mystr[i] = mystr[i] + 32; // 65 = 'A' +32 == a 97
		}
	}
}


void converttoupper()
{
	for (size_t i =0 ; mystr[i] != '\0' ; i++)
	{
		if ( mystr[i] >=97 && mystr[i] <=122  )
		{
		mystr[i] = mystr[i] -  32; // 97 = 'a' - 32 == A 65
		}
	}
}




int main() 
{
	/* char s = 'A';
	printf("%c",s+32); // it will print according to number like 97 is a */
	printf("Enter Your Name : ");
	scanf("%[^\n]s", mystr);

	printf("In which you want to convert \npress l for lower \npress u for upper :");
	
	char a;
	scanf("%s",&a);
	getchar();

	if (a == 'l') // by if else statement
	{
		converttolower();
		puts(mystr);
	}
	else if (a == 'u' )
	{
		converttoupper();
		puts(mystr);
	}
	else 
	{
		printf("Invalid entryy!!!");
	}
	
	
	printf("Enter u for upper and l for lower"); // by switch statement
	char o; 
	scanf("%s",&o);

	switch (o)
	{
	case 'l':
		converttolower();
		puts(mystr);
		break;
	case 'u':
		converttoupper();
		puts(mystr);
		break;
	
	default:
		printf("Invalid entry...");
		break;
		
	
	}
	
	

}