#include <stdio.h>
#include <string.h>

int main() 
{
	char s1[123] = "Hel";
	char *s2 = "Hela";
	int val = strcmp(s1,s2);
	printf("%d",val);
}