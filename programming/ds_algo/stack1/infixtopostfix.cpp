#include <iostream>
#include<stdio.h>
#include <string.h>
using namespace std;

struct stack
{
    int size;
    int top;
    char *arr;
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void push(int value, struct stack *ptr)
{
    if (isFull(ptr))
    {
        cout << "Stack overflow" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top]; // store the topmost value
        ptr->top--;
        return val;
    }
}


int stacktop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

int prec(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else{
        return 0;
    }
    
}

int isoperator(char ch){
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/' )
        return 1;
    else{
        return 0;
    } 
}


char * infixtopostfix(char *infix)
{
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr= (char *)malloc(sp->size * sizeof(char));


    char * postfix = (char *)malloc((strlen((infix)+1)* sizeof(char))); // empty char to store converted postfix


     int i =0; // infix scanner
    int j = 0; //postfix fill


    while(infix[i]!='\0')//to scan till last of the string.
    {
        if (!isoperator(infix[i])) //operand like a b , c y 
        {
            postfix[j] = infix[i]; //postfix empty me bhar diye a b c
            i++;
            j++;
        }
        else{
            if(prec(infix[i]) > prec(stacktop(sp))) // jo operator aaya usko stack ke top operator se compare kiye
            {                                       //agar infix operator ka precedence jayda hoga stack ke top precedence se
                 push(infix[i] , sp);                //toh push kr diye
                 i++;
            }
            else{
                postfix[j] = pop(sp);               //varna pop krke usko postfix me dal denge
                j++;
            }
        }
    }
     while(!isEmpty(sp)) // jab tak vo empty nhi ho jata
        { 
            postfix[j] = pop(sp); // tab tak infix ka pop krke postfix me dal denge
            j++;
        }
        postfix[j]= '\0';
        return postfix;
}




int main()
{
    char *infix = (char *)"ab-";
    cout<<"Postfix is "<<infixtopostfix(infix);
   
    return 0;
}