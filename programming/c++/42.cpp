#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <math.h>
using namespace std;

class simplecalc
{
    public : 
        void perform(int a, int b)
        {
            cout<<"Sum is "<<a+b<<endl;
            cout<<"multiplication is "<<a*b<<endl;
            cout<<"minus is "<<a-b<<endl;
            cout<<"dividision is "<<(float)a/b<<endl;
        }
};

class Scientificalc
{
    public :
    void show(int a, int b){
        cout<<"Exponent is "<<pow(a,b)<<endl;
        cout<<"Square root is "<<sqrt(a)<<endl;
        cout<<"sin is "<<sin(a)<<endl;
        cout<<"cos is "<<cos(a)<<endl;
    
    }
};

class hybridcalc : public simplecalc , public Scientificalc{
     
};

int main()
{
   hybridcalc res;
   int a,b;
   cin>>a;
   cin>>b;
   res.show(a,b);
   res.perform(a,b);
    return 0;
}