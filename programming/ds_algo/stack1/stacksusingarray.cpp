#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    int *arr;
};

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



int peek(struct stack *ptr, int i)
{
    if (ptr->top-i+1 < 0)
    {
        cout<<"Invalid position"<<endl;
        return -1;
    }
    else{
        return ptr->arr[ptr->top-i+1];
    }
}

int stacktop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

int stackbottom(struct stack *ptr)
{
    return ptr->arr[0];
}


int main()
{
    // struct stack s;
    // s= new struct stack;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack)); // create instance dynamically , requeting actual space of all elements of struct.
    s->size = 21;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    cout<<"Stack has been created successfully"<<endl;

    // struct stack *sp;
    // sp = (strtuc stack *)malloc(sizeof(struct stack));
    // sp->arr = (int *)malloc(s->size * sizeof(int));
    // s= new struct stack;

    // sp->top = -1; 
    // sp->size = 8;


    push(1, s);
    push(3, s);
    push(33, s);
    push(1337, s);
    push(31, s);

    //for peek
    for (int j = 1; j <= s->top+1; j++)
    {
        cout<<"The value : "<<peek(s,j)<<endl;
    }
    cout<<stacktop(s)<<endl;
    cout<<stackbottom(s)<<endl;



    // s->arr[0] = 1337;
    // s->top++;
    // s->arr[1] = 13337;
    // s->top++;
    // s->arr[2] = 133371;
    // s->top++;
    // s->arr[3] = 13337;
    // s->top++;

    if (isEmpty(s))
    {
        cout << "The stack is empty" << endl;
    }
    else
    {
        cout << "The stack is not empty" << endl;
    }

    if (isFull(s))
    {
        cout << "The stack is full" << endl;
    }
    else
    {
        cout << "The stack is not full" << endl;
    }
    return 0;
}
