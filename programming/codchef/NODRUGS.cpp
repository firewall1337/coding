#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,l;
        cin>>n>>k>>l;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if (k <= l && k<0)
        {
            cout<<"No"<<endl;
            break;
        }
        int f = arr[n-1];
        f = f +k;
        

        
        
    }
        
    return 0;
}