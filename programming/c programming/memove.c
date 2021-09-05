#include <stdio.h>
#include <string.h>


int main() 
{
	int m[6] = {1,2,3,4,5,6};
	memmove(m + 4, m + 4 + 1 ,(6 - 4 - 1)  *  sizeof(*m));
	for (size_t i = 0 ; i < 6 ; i++)
	{
		printf("%d\n",m[i]);
	}


}