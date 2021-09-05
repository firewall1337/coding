
#include <stdio.h>
#include <string.h>

int main() 
{
	char s[124];
	 /* fgets(s , sizeof(s) , stdin );
	puts(s); */
	
	printf("Enter Your name: ");
	scanf("%[^\n]s", s);		// %s will only print with having no space and %[^\n]s is print string of whole sentance until enter is press
	puts(s);
	

}