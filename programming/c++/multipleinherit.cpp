#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
Syntax for inheriting in multiple
class DerivedC : v-m base1, v-m base2
{
    body of "DerivedC"
};
*/

class Base1 {
    protected :
        int base1int;
    public :
        void setbase1int(int a){
            base1int =a;
        }
      
} ;


class Base2 {
    protected :
        int base2int;
    public :
        void setbase2int(int a){
            base2int =a;
        }
       
} ;


class Derived : public Base1 , public Base2
{
    public :    
        void show(){
            cout<<"The value of Base1 is "<<base1int<<endl;
            cout<<"The value of Base2 is "<<base2int<<endl;
            cout<<"The sum of Base1 and base2 is "<<base2int+base1int<<endl;
        }

};


int main()
{
    Derived abhi;
    abhi.setbase1int(21);
    abhi.setbase2int(34);
    abhi.show();
    return 0;
}