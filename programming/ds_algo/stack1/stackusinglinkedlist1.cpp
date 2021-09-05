#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *top1 = NULL;

int isempty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct node *push(struct node *ptr, int x)
{
    if (isfull(ptr))
    {
        cout << "Stack overflow\n";
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = ptr;
        ptr = n;
    }
    return ptr;
}

int pop(struct node *ptr)
{
    int x;
    if(isempty(ptr))
    {
        cout<<"Stack is Underflow"<<endl;
    }
    else{
        struct node *n = ptr;
        top1 = ptr->next;
        x = n->data;
        free(n);
    }
    return x;
}
 

void traversal(struct node *p)
{
    while (p != NULL)
    {
        cout << "Element is : " << p->data << endl;
        p = p->next;
    }
}

int peek(int pos)
{
    struct node * ptr=top1;
    for (int i = 0; i < pos -1 && ptr!=NULL; i++)
    {
        ptr=ptr->next;
    }
    if(ptr!=NULL)
    {
        return ptr->data;
    }
    else{
        return -1;
    }
    
}

int stacktop(struct node *ptr){
    return ptr->data;
}

int stackbottom(struct node *ptr)
{
    struct node *temp = ptr;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    return temp->data;
}

int main()
{

    top1 = push(top1, 1337);
    top1 = push(top1, 1234);
    top1 = push(top1, 1111);
    traversal(top1);
    // int x = pop(top1);

    // cout<<"Popped element : "<<x<<endl;
    
    for (int i = 1; i <= 3; i++)
    {
        cout<<"value at position is : "<<peek(i)<<endl;
    }
    cout<<"The stack top value is: "<<stacktop(top1)<<endl;
    cout<<"The stack bottom value is: "<<stackbottom(top1);
    return 0;
}