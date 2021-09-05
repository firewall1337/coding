#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

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

struct node *push(struct node *top, int x)
{
    if (isfull(top))
    {
        cout << "Stack overflow\n";
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
    }
    return top;
}

int pop(struct node **ptr)
{
    int x;
    if(isempty(*ptr))
    {
        cout<<"Stack is Underflow"<<endl;
    }
    else{
        struct node *n = *ptr;
        *ptr = (*ptr)->next;
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

int main()
{
    struct node *top1 = NULL;
    top1 = push(top1, 1337);
    top1 = push(top1, 1234);
    top1 = push(top1, 1111);
    traversal(top1);
    int x = pop(&top1);
    cout<<"Popped element : "<<x<<endl;
    traversal(top1);
    return 0;
}