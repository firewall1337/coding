#include <stdio.h>
int main()
{
    union t
    {
        char l;
        int c;

    } p;

    
    printf("%d\n",p.c =34);
}