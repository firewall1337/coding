#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int s;
    cout<<"\nWaht do you want to search : ";
    cin>>s;
    int arr[n];
    cout<<"Enter the elements of array :";
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == s)
        {
           cout<<i;
        }
        
    }


    
    return 0;
}