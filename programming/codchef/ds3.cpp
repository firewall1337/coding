#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    char x = 'z';
    char y = 'o';
    int res1 = count(str.begin(),str.end(),x);
    int res2 = count(str.begin(),str.end(),y);
    if (res1*2==res2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}