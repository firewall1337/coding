#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class complexa
{
    int a,b;
    public :
        void setnumber(int l1,int l2)
        {
            a= l1;
            b = l2;
        }
        void printnumber()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
        //to get by friend function
        friend complexa sumofc(complexa o1 , complexa o2);


        // to get normally
        // void sumofc(complexa o1,complexa o2)
        // {
        //     a = o1.a + o2.a;
        //     b = o1.b + o2.b;
        // }
};

//
complexa sumofc(complexa o1 , complexa o2)
{
    complexa o3;
    o3.setnumber((o1.a+o2.a) , (o1.b + o2.b));
    return o3;
}


int main()
{
    complexa c1,c2,sum;
    c1.setnumber(1,4);
    c1.printnumber();
    c2.setnumber(2,5);
    c2.printnumber();
    sum = sumofc(c1,c2);
    sum.printnumber();
    return 0;
}