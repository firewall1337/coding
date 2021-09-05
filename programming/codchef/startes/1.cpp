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
        int x1,y1,x2,y2,d;
        cin >>x1>>y1>>x2>>y2>>d;
        if (min(x1/x2,y1/y2) >= d)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}