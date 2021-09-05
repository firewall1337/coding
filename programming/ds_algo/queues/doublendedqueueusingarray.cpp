#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

struct queue
{
    int size;
    int *arr;
    int front;
    int rear;
};

int isfull(struct queue *ptr)
{
    if ((ptr->front == 0 && ptr->rear == ptr->size - 1) || ptr->front == ptr->rear + 1) //https://youtu.be/WJres9mgiAk?t=935
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
    if (ptr->rear == -1 && ptr->front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueueRear(struct queue *ptr, int value) //addition by ++
{
    if (isfull(ptr))
    {
        cout << "this Queue is full" << endl;
    }
    else if (ptr->front == -1 && ptr->rear == -1) //first time insertion , nothing in DEqueue
    {
        ptr->front = 0;
        ptr->rear = 0;
        ptr->arr[ptr->rear] = value; // add in rear
    }
    else if (ptr->rear == ptr->size - 1) // when rear is on last
    {
        ptr->rear = 0;
        ptr->arr[ptr->rear] = value;
    }
    else
    {
        ptr->rear++;
        ptr->arr[ptr->rear] = value;
    }
}

void enqueueFront(struct queue *ptr, int value) // addition by --
{
    if (isfull(ptr))
    {
        cout << "this Queue is full" << endl;
    }
    // special case
    else if (ptr->front == -1 && ptr->rear == -1) //first time insertion , nothing in DEqueue
    {
        ptr->front = 0;
        ptr->rear = 0;
        ptr->arr[ptr->front] = value; // add in front
    }
    else if (ptr->front == 0) // when front is 0
    {
        ptr->front = ptr->size - 1;
        ptr->arr[ptr->front] = value;
    }

    //regular case :
    else
    {
        ptr->front--;
        ptr->arr[ptr->front] = value;
    }
}

// int dequeue(struct queue *q)
// {
//     int a = -1;
//     if (isempty(q))
//     {
//         cout << "Queue is empty" << endl;
//     }
//     else
//     {
//         a = q->arr[q->f];
//         if (q->f >= q->rear)
//         { //only one element in queue
//             q->f = -1;
//             q->rear = -1;
//         }
//         else
//         {
//             q->f++;
//             a = q->arr[q->f];
//             cout << "XX Dequeued element : ";
//         }
//     }
//     return a;
// }

// int dequeueF(struct queue *q)
// {
//     int a = -1;
//     if (isempty(q))
//     {
//         cout << "Queue is empty" << endl;
//     }
//     else
//     {
//         a = q->arr[q->f];
//         if (q->f >= q->rear)
//         { //only one element in queue
//             q->f = -1;
//             q->rear = -1;
//         }
//         else
//         {
//             a = q->arr[q->f];
//             q->f++;
//             cout << "XX Dequeued element AT FRONT: ";
//         }
//     }
//     return a;
// }

// int dequeueR(struct queue *q)
// {
//     int a = -1;
//     if (isempty(q))
//     {
//         cout << "Queue is empty" << endl;
//     }
//     else
//     {
//         a = q->arr[q->rear];
//         if (q->f >= q->rear)
//         { //only one element in queue
//             q->f = -1;
//             q->rear = -1;
//         }
//         else
//         {
//             a = q->arr[q->rear];
//             q->rear--;
//             cout << "\nXX Dequeued element at REAR: ";
//         }
//     }
//     return a;
// }

// void display(struct queue *ptr)
// {
//     for (int i = ptr->front; i != ptr->rear; i = i+1%ptr->size) // circular increment
//     {
//         cout << ptr->arr[i] << " ";
//     }
// }

void dequeuefront(struct queue *ptr)
{
    if (isempty(ptr))
    {
        cout << "Queue is empty" << endl;
    }
    else if (ptr->front == ptr->rear) // only one element in queue
    {
        ptr->rear = -1;
        ptr->front = -1;
    }
    else if (ptr->front == ptr->size - 1) // if f is on last
    {
        ptr->front = 0;
    }
    else
    {
        ptr->front++;
    }
}

void dequeuerear(struct queue *ptr)
{
    if (isempty(ptr))
    {
        cout << "Queue is empty" << endl;
    }
    else if (ptr->front == ptr->rear)  // only one element in queue
    {
        ptr->rear = -1;
        ptr->front = -1;
    }
    else if (ptr->rear==0) // if rear is on first
    {
        ptr->rear = ptr->size -1;
    }
    else{
        ptr->rear--;
    }
}

void display(struct queue *ptr)
{
    int i = ptr->front;
    while (i != ptr->rear)
    {
        cout << ptr->arr[i] << " ";
        i = (i + 1) % ptr->size;
    }
    cout << ptr->arr[ptr->rear] << " ";
}

int main()
{
    struct queue *q1 = (struct queue *)malloc(sizeof(struct queue));

    q1->size = 50;
    q1->rear = -1;
    q1->front = -1;
    q1->arr = (int *)malloc(q1->size * sizeof(int));

    cout << "Queue created:" << endl;
    // enqueueR(q1, 10);
    enqueueRear(q1, 2);
    enqueueRear(q1, -1);
    enqueueRear(q1, 0);
    enqueueRear(q1, 0);
    enqueueRear(q1, 5);
    
    // enqueueRear(q1, 0);
    display(q1);
    cout<<endl;
    dequeuefront(q1);
    dequeuerear(q1);
    display(q1);
    // enqueueR(q1, 1234);
    // cout << dequeueF(q1) << endl;
    // cout << dequeueF(q1) << endl;
    // cout << dequeueR(q1) << endl;
    // cout << dequeueF(q1) << endl;
    // cout << dequeueF(q1) << endl;
    // queuepeek(q1);
    // enqueue(q1, 40);
    // cout << dequeue(q1) << endl;
    // cout << dequeue(q1) << endl;
    // cout << dequeue(q1) << endl;

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