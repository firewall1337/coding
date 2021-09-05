#include <stdio.h>
#include <string.h>
int main()
{
	int a,b;
    FILE *in;
    char t[300];
    char c[300];
    int d=0;
    in = fopen("tables.txt","r");
    printf("Please enter the number of which you want table");
    scanf("%d",&b);
    snprintf(c,300,"====%d====\n",b);
    while (fgets(t,300,in) != NULL)
    {
        if (strcmp(t,c) == 0 && d <=10)
        {
            printf("%s",t);
            d++;
        }
    }

}