#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() 
{
	char s[123];
	printf("Enter your name : ");
	scanf("%[^\n]s", s );
	int l = strlen(s);
	printf("%d",l);
	s[0] = toupper(s[0]); // to get the captilize string of s
	s[l-1] = tolower(s[l-1]); // to get the lowerize string of s
	printf("your name : \n%s",s);
}