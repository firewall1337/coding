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
        int d ,x,y,z,p1,p2;
        cin>>d>>x>>y>>z;
        p1 = 7*x;
        p2 = ((d*y) + ((7-d)*z));
        cout<<p1<<p2;
        if (p1>p2)
        {
            cout<<p1<<endl;
        }  
        else
            cout<<p2<<endl;


    }
    return 0;
}