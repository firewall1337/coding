#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
const int N = 1e7+10;
int hsh[N];
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];

         for (int i = 0; i < n; i++)
         {
             cin>>arr[i];
             hsh[arr[i]]++;
         }
         for (int i = 0; i < n; i++)
         {
            if (hsh[arr[i]] == 1)
            {
                cout<<"NOn repeating: "<<arr[i]<<endl;
                break;
            }
         }
         
    }
    
    return 0;
}