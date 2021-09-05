#include <stdio.h>
int main(){
    printf("abhishek morla\n");
    printf("Enter any two numbers to proceed: \n");

    int a ;
    int b ;
    int c;
    scanf("%d %d",&a,&b);
    int d;
    printf("press 1 for addition \n");
    printf("press 2 for substraction \n");
    printf("press 3 for multiplication \n");
    printf("press 4 for division \n");
    scanf("%d",&d);
    if (d == 1){
        c = a + b;
        printf("%d is answer",c);
    }
    else if (d == 2) 
    { c = a - b ;
        printf("Your answer is %d",c);
    }
    else if (d == 3) 
    {
        c = a * b ;
        printf("Your answer is %d",c);
    }
    else if (d == 4)
    {
        c = a / b ;
        printf("Your answer is %d",c);
    }
    else {
        printf("Invalid input!!!!");
    }
    return 0;
}
