#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a , b ;
        cin >> a>>b;
        int c;
        c = a + b;
        if (c < 3 )
        {
            cout << "1"<<endl;
        }
        else if (3 <= c && c <= 10)
        {
            cout << "2"<<endl;
        }
        else if (11 <= c && c <= 60)
        {
            cout << "3"<<endl;
        }
        else{
            cout << "4"<<endl;
        }
        
        
    }
    return 0;
}