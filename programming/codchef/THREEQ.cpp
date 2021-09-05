#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sa1=0,sa0=0;
        int sb1=0,sb0=0;
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        int b1,b2,b3;
        cin>>b1>>b2>>b3;
        if(a1==1)
        {
            sa1++;
        }
        else
        {
            sa0++;
        }
        if(a2==1)
        {
            sa1++;
        }
        else
        {
            sa0++;
        }
        if(a3==1)
        {
            sa1++;
        }
        else
        {
            sa0++;
        }
        if(b1==1)
        {
            sb1++;
        }
        else
        {
            sb0++;
        }
        if(b2==1)
        {
            sb1++;
        }
        else
        {
            sb0++;
        }
        if(b3==1)
        {
            sb1++;
        }
        else
        {
            sb0++;
        }
        if (sa1 == sb1 && sa0 == sb0)
        {
            cout<<"Pass"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }
    }    
    return 0;
}