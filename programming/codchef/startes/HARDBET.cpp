#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a < b && a < c)
        {
            cout<<"DRAW"<<endl;
        }
        else if(b < a && b < c)
        {
            cout<<"BOB"<<endl;
        }
        else{
            cout<<"ALICE"<<endl;
        }
    }
    return 0;
}