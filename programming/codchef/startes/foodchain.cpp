#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int e, k;
        cin >> e >> k;
        int c=0;
        while (e!=0)
        {
            e = floor(e / k);
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}