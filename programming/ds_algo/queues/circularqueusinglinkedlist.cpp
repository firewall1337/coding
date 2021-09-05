#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *f = NULL;
struct node *r = NULL;

int isempty()
{
    if (f == NULL)
    {
        return 1;
    }
    return 0;
}

void enqueue(int x)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = x;
    n->next = NULL;
    if (f == NULL)
    {
        f = r = n;
        r->next = f; //circular pointing
    }
    else
    {
        r->next = n;
        r = n;
        r->next = f; // circular pointing rear pointing to front
    }
}

int dequeue()
{
    struct node *ptr = f; // pointing to front
    int val = -1;
    if (isempty())
    {
        cout << "Underflow" << endl;
    }
    else if (f == r) // single element
    {
        f = r = NULL;
        val = ptr->data;
        free(ptr);
    }
    else
    {
        f = f->next;
        r->next = f; // circular pointing rear pointing to front
        val = ptr->data;
        free(ptr);
    }
    return val;
}

void linkedlisttraversal()
{
    struct node *ptr = f;
    cout << "Traversal : " << endl;
    while (ptr->next != f)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next; // increment
    }
    cout << "Element : " << ptr->data << endl;
}

int main()
{
    enqueue(1235);
    enqueue(1337);
    enqueue(1552);
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    linkedlisttraversal();
    return 0;
}