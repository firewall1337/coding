#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

FILE *fp;
int tl = 0;
struct todo {
	char t[50];
	char ca[50];
	_Bool isc;
} todos[20];


void stf()
{
	fp = fopen("todos.txt","w");
	for (size_t i = 0; i < tl; i++  )
	{
		fwrite(&todos[i] , sizeof(struct todo) , 1 , fp );
	}
	fclose(fp);
}

void getfilesize(){
	fseek(fp , 0L , SEEK_END);
	unsigned int long size = ftell(fp);
	fseek(fp , 0L , SEEK_SET);
	tl = size/sizeof(struct todo);
}

void rff()
{
	
	fp = fopen("todos.txt","r");
	getfilesize();
	for (size_t i = 0; i < tl; i++  )
	{
		fread(&todos[i] , sizeof(struct todo) , 1 , fp );
	}
	fclose(fp);
}





void addtodo(){
	// for title
	char ui[50];
	printf("Tell the task >>");
	getchar();
	scanf("%[^\n]s",ui);
	strncpy(todos[tl].t,ui,50);

	//for time 
	char totime[50];
	struct tm ct;
	time_t timeS= time(NULL);
	localtime_r(&timeS,&ct);
	snprintf(totime,50, "%i/%i %i:%i",ct.tm_mday,ct.tm_mon+ 1, ct.tm_hour , ct.tm_min);
	strcpy(todos[tl].ca,totime);

	// set bool
	todos[tl].isc = false;
	tl++;
	 
}


void pat(){
	printf("+------+--------------------------------------------------+-------------+------------------+\n");
	printf("| ID   |                    TODO                          | created at  |     Completed    |\n");
	printf("+------+--------------------------------------------------+-------------+------------------+\n"); 


	for(int i = 0; i < tl; i++ )
	{
		printf("| %3d  |  %-35s             | %-10s | %-15s  |\n",i+ 1 , todos[i].t , todos[i].ca , (todos[i].isc) ? "YES" : "NO");
		printf("+------+--------------------------------------------------+-------------+------------------+\n");
	}

	
}


void over()
{
	int tid;
	printf("Enter the id:");
	scanf("%d",&tid);
	tid--;
	todos[tid].isc = true;
}

void notover()
{
	int tid;
	printf("Enter the id:");
	scanf("%d",&tid);
	tid--;
	todos[tid].isc = false;
}

void checkover()
{
	printf("if the id entered is comeplted then press 1 if not completed then 2:");
	int c;
	scanf("%d",&c);
	switch (c) 
	{
		case 1:
		over();
		break;

		case 2:
		notover();
		break;
	}
}


void del()
{	
	int tid;
	printf("Enter the id which you want to delete:");
	scanf("%d",&tid);
	tid--;
	memmove(todos + tid ,todos + tid + 1,(tl - tid - 1)*sizeof(*todos) );
	tl--;

}

void uc()
{
	char uch;
	printf("Type 'A' to add\nType 'D' to delete\nType 'Q' to exit\nType 'C' to check wether complete or not\n ->");
	uch = getchar();
	switch (uch)
	{
		case 'A':
		addtodo();
		break;
		case 'D':
		del();
		break;
		case 'C':
		checkover();
		break;
		case 'Q':
		exit(0);
		default:
		printf("Command not found");
		break;
	}
	stf();
	pat();
	uc();

}

int main() 

{
rff();
pat();
uc();

	
}