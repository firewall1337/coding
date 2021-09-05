#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class base{
    int data1; // private by default which is not inhertied;
    public :
         int data2;
         void setdata()
         {
             data1 = 10 ;
             data2 =  20;
         }
         int getdata1()
         {
             return data1;
         }
         int getdata2()
         {
             return data2;
         }
};

class Derived : public base{ //class is being derived publically
    int data3;
    public:
        void process(){
            data3 = data2 * getdata1(); 

            /* you can access data 1 , so have to use
            function to get data
            */
        };
        void display()
        {
            cout<<"value of data 1 is   "<<getdata1()<<endl;
            cout<<"value of data 2 is   "<<data2<<endl;
            cout<<"value of data 3 is   "<<data3<<endl;

        }

};


int main()
{
    Derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}