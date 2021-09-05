#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
/*
Case 1:

class B : public A{
    // order of execution of constructor - first A() then B()

};

Case 2:
class A : public B , public C{
    //order of execution of constructor - first B() then C() and A()
};


Case 3:
class A: public B , virtual public C{
    // order of execution of constructor - virtual class c - > then B then A
};


*/

class Base1{
    int data1;
    public :
        Base1(int i){
            data1 = i;
            cout<<"Base 1 class constructor is called"<<endl;
        }
        void printdata1(){
            cout<<"The value of data is"<<data1<<endl;
        }
};

class Base2{
    int data2;
    public :
        Base2(int i){
            data2 = i;
            cout<<"Base 2 class constructor is called"<<endl;
        }
        void printdata2(){
            cout<<"The value of data is"<<data2<<endl;
        }
};

class Base3{
   
    int l;
    public :
    Base3(int i){
        l = i;
        cout<<"Base 3 constructor is called."<<endl;
    }
};

class Derived : public  Base2 , public  virtual Base1 , public Base3{
    int derived1,derived2;
    public :
        Derived(int a , int b , int f ,int c , int d) : Base1(a) , Base2(b) , Base3(f)
        {
            derived1 =c;
            derived2 = d;
            cout<<"Derived class constructor is called"<<endl;
        }
         void printdatad(){
            cout<<"The value of derived 1 is "<<derived1<<endl;
            cout<<"The value of derived 2 is "<<derived2<<endl;
        }
};

int main()
{
    Derived abhi(1,2,3,4, 5);
    abhi.printdatad();
    return 0;
}