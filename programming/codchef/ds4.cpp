#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int fact=1;
        for (int i = 1; i <= n; i++)
        {
            fact=fact*i;
        }
        cout<<fact;
        
    }
    return 0;
}