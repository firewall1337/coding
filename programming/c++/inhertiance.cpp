#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

//base class
class emplo
{
    float rv;
    float sal;

public:
    int id;
    emplo()
    {
    }

    void printdata()
    {
        cout << "Accessing private member" << endl;
        cout << sal << endl;
    }
};

/*
// deived class syntax

class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc..
}

note :
1. default visibility mode is private
2. publivc visibility mode:
    public member of base class become public members of derived class;
3. Private visibility Mode:
    public members of the base class becomes private member of derived class
4. private members of base class are never inherited.
;

*/
//creating  a inherabhishekmorla class derived from base class
//private mode
class inherabhishekmorla : public emplo
{
public:
    inherabhishekmorla(int emid)
    {
        id = emid;
    }

    int languagecode = 9;
    void getdata()
    {
       
        cout<<"Accessing base  class"<<endl;
        cout<<id<<endl;
    }
};

int main()
{
    emplo abhishek, morla;
    abhishek.printdata();
    inherabhishekmorla c1(12312);
    cout << c1.languagecode<<endl;;
    cout<<c1.id;
   c1.getdata();
    return 0;
}