#include <stdio.h>
int atn(int x , int y , int z);
int main()
{

printf("Value of sum = %d \n",atn(2,3,14));

}

int atn(int x , int y , int z){
	int s = x +y +z;
	return s;
}