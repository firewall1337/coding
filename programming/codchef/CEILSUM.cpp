#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a,b;
        int ans,x;
        if(a==b)
        {
            ans=0;
        }
        else if (a>b)
        {
            x = a -1;
        }
        else{
            x = b -1;
        }
        ans = floor((b-x)/2) + floor((x-a)/2);
        cout<<floor(ans);
    }   
    return 0;
}