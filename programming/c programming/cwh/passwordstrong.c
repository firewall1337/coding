#include <stdio.h>
#include <string.h>
int main()
{
	int i,n=0,lc=0,uc=0,sp=0,l=0;
	char s[100];
	printf("ENTER THE PASSWORD: ");
	scanf("%s",s);
	for (i = 0; i < strlen(s) ; i++)
	{
		if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || 
		s[i] == '7' || s[i] == '8' || s[i] == '9' )
		n++;
		if ( s[i] >= 'A' && s[i] <='Z' )
		uc++;
		if ( s[i] >= 'a' && s[i] <='z')
		lc++;
		if ( s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '^'|| s[i] == '&'
		|| s[i] == '*' || s[i] == '(' || s[i] == ')' || s[i] == '-' || s[i] == '+')
		sp++;

		if(strlen(s) >= 6 )
		l++;
	}

	if (n>=1)
	{
		if (uc >=1)
		{
			if (lc >=1)
			{
				if (sp >=1)
				{
					if (l >=1)
					printf("PASSWORD IS STRONG.");
					else
					printf("PASSWORD SHOULD BE MORE LENGTH THAN 6");
				}
				else
				printf("PASSWORD SHOULD CONTAIN ATLEAST ONE SPECIAL CHARACTER");
			}
			else 
			printf("PASSWORD SHOULD CONTAIN ATLEAST ONE ELEMENT IN LOWER CASE.");

		}
		else 
		printf("PASSWORD SHOULD CONTAIN ATLEAST ONE ELEMENT IN UPPER CASE.");
	}
	else 
	printf("PASSWORD SHOULD CONTAIN ATLEAST ONE NUMBER");
}