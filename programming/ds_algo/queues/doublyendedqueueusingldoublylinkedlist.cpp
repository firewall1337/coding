#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *f = NULL; //head
struct node *r = NULL; //tail

int isempty()
{
    if (f == NULL)
    {
        return 1;
    }
    return 0;
}

int isfull()
{
    if (r == NULL)
    {
        return 1;
    }
    return 0;
}

void enqueueatfront(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        cout << "This queue is full" << endl;
    }
    else
    {
        n->data = val;
        n->next = n->prev = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            n->next = f;
            f->prev = n;
            f = n;
        }
    }
}

void enqueueatrear(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        cout << "This queue is full" << endl;
    }
    else
    {
        n->data = val;
        n->next = n->prev = NULL;
        if (r == NULL)
        {
            f = r = n;
        }
        else
        {
            n->prev = r;
            r->next = n;
            r = n;
        }
    }
}

void dequeueatfront()
{
    struct node *ptr = f;
    if (isempty())
    {
        cout << "This queue is empty" << endl;
    }
    else
    {
        f = f->next;
        if (f == NULL)
        {
            r == NULL;
        }
        else
        {
            f->prev = NULL;
            free(ptr);
        }
    }
}

void dequeueatrear()
{
    struct node *ptr = r;
    if (isempty())
    {
        cout << "This queue is empty" << endl;
    }
    else
    {
        r = r->prev;
        if (r == NULL)
        {
            f == NULL;
        }
        else
        {
            r->next = NULL;
            free(ptr);
        }
    }
}

void display()
{
    if (isempty()){
        cout<<"empty"<<endl;
        return;
    }
    struct node *temp;
    temp = f;
    while (temp != r->next)
    {
        cout << "Element : " << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    enqueueatfront(1);
    enqueueatfront(2);
    enqueueatfront(3);
    enqueueatrear(4);
    enqueueatrear(1337);
    enqueueatfront(1337);
    display();
    dequeueatfront();
    dequeueatrear();
    dequeueatrear();
    display();
    dequeueatrear();
    dequeueatrear();
    dequeueatrear();
    display();
    if (isempty())
    {
        cout << "\nQueue is empty" << endl;
    }

    if (isfull())
    {
        cout << "\nQueue is full" << endl;
    }
    return 0;
}
