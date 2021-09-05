#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class Y;

class X{
    int data;
    public :
        void setvalue(int value)
        {
            data = value;
        }
    friend void add(X , Y);
};

class Y{
     int num;
    public :
        void setvalue(int value)
        {
            num = value;
        }
        friend void add(X , Y);
};

void add(X o1, Y o2)
{
    cout<<""<<o1.data + o2.num; 
}


int main()
{
    X abhi;
    abhi.setvalue(21);
    Y morla;
    morla.setvalue(1);
    add(abhi,morla);
    return 0;
}