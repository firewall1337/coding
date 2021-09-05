#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "how ar you ?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "kaise ho ?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet(){
        Base2 :: greet();
    }
  
};

class B
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};
// D's new say method will override base class's say method
class D : public B
{
    int a;

public:
    void say()
    {
        cout << "Hello my beautiful people" << endl;
    }
};

int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();

    
    return 0;
}