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
        int a,b,c;
        cin>>a>>b>>c;
        int a1[3];
        a1[0] = a;
        a1[1] = b;
        a1[2] = c;
        sort(a1,a1+3);
        int res = a1[2] + a1[1];
        cout<<res<<endl;
         
    }
    return 0;
}