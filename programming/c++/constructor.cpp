#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class construc{
    int a,b;

    public :
        void printdata(){
            cout<<a<<b;
        }
        construc(){
        a = 12;
        b =2;
    }

};

int main()
{
    construc c1;
    c1.printdata();
    return 0;
}