#include <stdio.h>

char global = 'a';
int a = 4;

int main()
{
	
	char local = 'l';
	int b = 3;
	

	for (size_t i = 0 ; i < 5 ; i++){
		printf(" >> %lu\n",i);

		for (int i = 5; i < 10 ; i++){
			printf("[%lu]\n",i);


		}
	}

}