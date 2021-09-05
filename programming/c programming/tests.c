#include <stdio.h>
#include <string.h>

int main() 
{
    struct size
    {
       char a;
        int b;
    };
    struct size l = {'A',1234};
    printf("%d",sizeof(l));
}