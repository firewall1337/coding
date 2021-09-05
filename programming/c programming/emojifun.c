#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char *e[5] =  {u8"😀" , u8"b" , u8"😁" ,u8"😁"  , u8"😅"  };
	srand(time(NULL));
	int r = rand() % 5;
	printf("Your emoji is \n%s\n",e[r-1]);
	
}