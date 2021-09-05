#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

 class Bankdeposit{
     int principal;
     int years;
     float ir;
     float rv;
     public :
     Bankdeposit()
     {

     }
       
        Bankdeposit(int p , int y , float r)
        {
            principal = p;
            years = y;
            ir =r;
            rv = principal;
            for(int i=0; i < y;i++)
            {
                rv = rv * (1+r);
            }
        }
          Bankdeposit(int p , int y , int r)
        {
            principal = p;
            years = y;
            ir =float(r)/100;

            rv = principal;
            for(int i=0; i < y;i++)
            {
                rv = rv* (1+r);
            }

        }

        void show()
        {
            cout<<endl<<"Principal amount was "<<principal
            <<" Return value after "<<years
            << " is "<<rv<<endl;
        }

 };




int main()
{
    Bankdeposit bd1;
    int p,y;
    float r;
    int R;

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = Bankdeposit(p,y,r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = Bankdeposit(p,y,R);
    bd2.show();


    return 0;
}