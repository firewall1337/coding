#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *f = NULL;
struct node *r = NULL;

int isempty(struct node *f)
{
    if (f == NULL)
    {
        return 1;
    }
    return 0;
}

int isfull(struct node *r)
{
    if (r == NULL)
    {
        return 1;
    }
    return 0;
}

void enqueue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (isfull(n))
    {
        cout << "This queue is full" << endl;
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    struct node *ptr;
    ptr = f;
    int val = -1;
    if (isempty(f))
    {
        cout << "This queue is empty" << endl;
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

void linkedlisttraversal(struct node *ptr)
{
    cout<<"Traversal : "<<endl;
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next; // increment
    }
}

int main()
{
    cout<<"Deletion : "<<dequeue()<<endl;
    enqueue(1235);
    enqueue(1337);
    enqueue(1552);
    linkedlisttraversal(f);
    cout<<"Deletion : "<<dequeue()<<endl;
    cout<<"Deletion : "<<dequeue()<<endl;
    cout<<"Deletion : "<<dequeue()<<endl;
    cout<<"Deletion : "<<dequeue()<<endl;
    linkedlisttraversal(f);
    
    if (isempty(f))
    {
        cout << "\nQueue is empty" << endl;
    }

    if (isfull(r))
    {
        cout << "\nQueue is full" << endl;
    }
    return 0;
}