#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class employee{
    int sal;
    int id;
    public :
        int setid()
        {
            cout<<"Enter id: ";
            cin>>id;
            return 0;
        }
        int getid()
        {
            cout<<"The id is: "<<id;
            return 0;
        }

};



int main()
{   
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }


    return 0;
}