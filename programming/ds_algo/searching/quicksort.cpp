#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b)
{
    int *temp = a;
    *a = *b;
    *b = *temp;
}

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;

    do
    {

        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    } while (i < j);

    swap(a[low], a[j]);
    
    return j;
}

void quicksort(int a[], int low, int high)
{
    int partitionindex; // index of pivot after partition

    if (low < high)
    {
        partitionindex = partition(a, low, high);
        quicksort(a, low, partitionindex - 1);  // sort left subarray
        quicksort(a, partitionindex + 1, high); // sort right subarray
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    quicksort(array, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << array[i]<<" ";
    }

    return 0;
}