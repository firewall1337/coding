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
        int k;
        cin>>k;
        char s;
        for (int i = 0; i < k; i++)
        {
            cin>>s;
        }
        if (
        ( s == 'a' || s == 'b' || s == 'c' ||
        s == 'd' || s == 'e' || s == 'f' || 
        s == 'g' || s== 'h' || s == 'i' ||
        s == 'j' || s== 'k' || s== 'l' ||
        s == 'm' ) 
        && 
        (s == 'N' || s == 'O' || s== 'P' || 
        s == 'Q' || s == 'R' || s == 'S' ||
        s == 'T' || s == 'U' || s == 'V' ||
        s == 'W' || s == 'X' || s== 'Y' || s=='Z' )
        
        )
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}