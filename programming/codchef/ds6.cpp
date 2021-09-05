#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    char a = 'a';
    char e = 'e';
    char i = 'i';
    char o = 'o';
    char u = 'u';
    int res1 = count(s.begin(),s.end(),a);
    int res2 = count(s.begin(),s.end(),e);
    int res3 = count(s.begin(),s.end(),i);
    int res4 = count(s.begin(),s.end(),o);
    int res5 = count(s.begin(),s.end(),u);
    cout<<a<<" "<<res1<<endl;
    cout<<e<<" "<<res2<<endl;
    cout<<i<<" "<<res3<<endl;
    cout<<o<<" "<<res4<<endl;
    cout<<u<<" "<<res5<<endl;
    return 0;
}