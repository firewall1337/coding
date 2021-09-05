#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,s,size;
        cin>>n>>k>>s;
        s = s - (n*n);
        cout<<s/(k-1)<<endl;
    }
    return 0;
}