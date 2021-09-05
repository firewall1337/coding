#include <stdio.h>
#include <string.h>
#include <time.h>

struct todo {
	char t[50];
	char ca[50];
	_Bool isc;
};


int main() 
{
	struct todo todos;
	strcpy(todos.t,"\n\nAbhishek\n\n");
	printf("%s",todos.t);

}