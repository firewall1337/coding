#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class asd{
  int a ,b;
  public :
    void setdata(int v1,int v2)
    {
        a = v1;
        b = v2;
    }

    void sumofi(asd o1,asd o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void print(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }

};


int main()
{
    asd c1,c2,c3;
    c1.setdata(2,1);
    c1.print();

    c2.setdata(3,1);
    c2.print();
    
    c3.sumofi(c1,c2);
    c3.print();
    return 0;
}