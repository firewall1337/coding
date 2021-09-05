#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() 
{
	int t;
	FILE *fp;
	fp = fopen("tables.txt","r");
	char tab[30];
	char p[20];
	int i=0;
	int tc  = 1;

	printf("Enter the number to retrive that table :: ");
	scanf("%d",&t);

	snprintf(p,20,"====%d====\n",t);

	while (fgets(tab,30,fp) != NULL )
	{	
		if (i && tc < 11)
		{
			printf("%s",tab);
			tc++;
		}
		if (strcmp(tab , p) == 0)
		{
			i = 1;
		}
	
	}

	fclose(fp);
}