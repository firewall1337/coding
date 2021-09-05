#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

struct queue
{
    int size;
    int *arr;
    int f;
    int b;
};

int isfull(struct queue *ptr)
{
    if (ptr->b == ptr->size - 1) // rear = n - 1
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty(struct queue *ptr)
{
    if (ptr->f == ptr->b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q, int value)
{
    if (isfull(q))
    {
        cout << "this Queue is full" << endl;
    }
    else
    {
        if (q->f == -1)
        {
            q->f = 0;
        }
        q->b++;
        q->arr[q->b] = value;
        cout<<"=> Enqueued element : "<<value<<endl;
    }
}

int dequeue(struct queue *q)
{
    int a=-1;
    if (isempty(q))
    {
        cout << "Queue is empty" << endl;

    }
    else
    {
        a = q->arr[q->f];
        if (q->f >= q->b)
        { //only one element in queue
            q->f = -1;
            q->b = -1;
        }
        else
        {
            q->f++;
            a = q->arr[q->f];
            cout<<"XX Dequeued element : ";
        }
    }
    return a;
}

void queuepeek(struct queue *q)
{
    for (int i = q->f; i <= q->b; i++)
    {
        cout << q->arr[i] << " ";
    }
}

int main()
{
     struct queue *q1;
    q1 = (struct queue *)malloc(sizeof(struct queue));
    q1->size = 40;
    q1->b = -1;
    q1->f = -1;
    q1->arr = (int *)malloc(q1->size * sizeof(int));

    cout << "Queue created:" << endl;
    enqueue(q1, 10);
    enqueue(q1, 20);
    enqueue(q1, 30);
    enqueue(q1, 50);
    queuepeek(q1);
    // enqueue(q1, 40);
    // cout << dequeue(q1) << endl;
    // cout << dequeue(q1) << endl;
    // cout << dequeue(q1) << endl;
    // cout << dequeue(q1) << endl;
    // enqueue(q1, 1337);
    // enqueue(q1, 1337);
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