#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class complexs{
    int real , img;
    public : 
        void getdata(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<img<<endl;
        };
        void setadata(int a , int b){
            real = a;
            img =b;
        };
};


int main()
{
    // complexs c1;
    // complexs * ptr = &c1;
    complexs *ptr = new complexs; 
    complexs *ptr1 = new complexs[4];  // aaray of 4 objects.
    // (*ptr).setadata(1,43); is exactly same as or  
    // (*ptr).setadata(1,34); 
    ptr->setadata(1,43);
    ptr->getdata();
    return 0;
}