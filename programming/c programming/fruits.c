#include <stdio.h>
int main()
{
    char *fruits[] = {"Apple","Orange","Bananan","Grapes"};
    fruits[3]= "litchy";
    
	for (int i; i < 4 ; i++){
        printf("%s\n",fruits[i]);
    }
}