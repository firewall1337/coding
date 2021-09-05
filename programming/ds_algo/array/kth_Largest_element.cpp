#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i+1<<" element : ";
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the Kth element : ";
    cin>>k;
    sort(arr , arr + n, greater<int>());
    cout<<"The "<<k<<" element is "<<arr[k-1]<<endl;
    
    return 0;
}