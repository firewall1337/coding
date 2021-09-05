#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct queue
{
    int size;
    int *arr;
    int f;
    int r;
};

int isfull(struct queue *q)
{
    if ((q->r+1) % q->size == q->f)  // r+1 % N 
    {
        return 1;
    }
    return 0;
}

int isempty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isfull(q))
    {
        cout << "This Queue is full" << endl;
    }
    else
    {
        q->arr[q->r] = val;
        q->r = (q->r + 1) % q->size; //increament but as circular // r+1 % N 
        cout<<"=> Enqueued element : "<<val<<endl;
    }
}

int dequeue(struct queue *q)
{
    int val = -1;
    if (isempty(q))
    {
        cout << "This queue is empty" << endl;
    }
    else
    {
        val = q->arr[q->f];
        q->f = (q->f + 1) % q->size; // increment but as circular // r+1 % N 
        cout<<"\nXX Dequeued element : ";
    }
    return val;
}

void queuepeek(struct queue *q)
{
    for (int i = q->f; i <= q->r; i++)
    {
        cout << q->arr[i] << " ";
    }
}

int main()
{
    struct queue *q1;
    q1 = (struct queue *)malloc(sizeof(struct queue));
    q1->size = 40;
    q1->f = 0;
    q1->r = 0;
    q1->arr = (int *)malloc(q1->size * sizeof(int));

    cout << "Queue created:" << endl;
    enqueue(q1, 10);
    enqueue(q1, 20);
    enqueue(q1, 30);
    queuepeek(q1);
    // enqueue(q1, 40);
    cout << dequeue(q1) << endl;
    cout << dequeue(q1) << endl;
    cout << dequeue(q1) << endl;
    // cout << dequeue(q1) << endl;
    enqueue(q1, 1337);
    enqueue(q1, 1337);
    // enqueue(q1, 1337);

    if (isempty(q1))
    {
        cout << "\nQueue is empty" << endl;
    }

    if (isfull(q1))
    {
        cout << "\nQueue is full" << endl;
    }

    return 0;
}