#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int arraysum(int n, int arr[])
{
    if (n<0)
    {
        return 0;
    }
    
    return arraysum(n-1,arr) + arr[n];
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<arraysum(n,arr);
    return 0;
}