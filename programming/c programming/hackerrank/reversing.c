#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
	int p[num];
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }


    for(i = 0; i < (num)/2; i++)
	{
		p[num] = arr[i];
		arr[i] = arr[num-1-i];
		arr[num-1-i] = p[num];
	}
	
	  for(i = 0; i < num; i++)
        printf("%d ", arr[i]);
    return 0;
}