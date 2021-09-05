#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;

class simplecalc{
    int a ,b;
    public :
        void getdatasimple(){
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
       }
        void performsimple(){
            cout<<"Sum is "<<a+b<<endl;
            cout<<"multiplication is "<<a*b<<endl;
            cout<<"minus is "<<a-b<<endl;
            cout<<"dividision is "<<(float)a/b<<endl;
        }
}; 

class scientificcalc{
      int a ,b;
    public :
        void getdatascientif(){
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
       }
        void performscientif(){
         cout<<"Exponent is "<<pow(a,b)<<endl;
        cout<<"Square root is "<<sqrt(a)<<endl;
        cout<<"sin is "<<sin(a)<<endl;
        cout<<"cos is "<<cos(a)<<endl;
        }
};

class hybridcal : public scientificcalc , public simplecalc {
     
};



int main()
{
    hybridcal morla;
    morla.getdatascientif();
    morla.getdatasimple();
    morla.performscientif();
    morla.performsimple();

        return 0; 
}