#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class COCONUT{
    int Xa,Xb;
    public:
        void tnc1()
        {
            cin>>Xa;
        }
        void tnc2()
        {
            cin>>Xb;
        }
        int tnc()
        {
            return Xb/Xa;
        }
    
};

int main()
{
    COCONUT c1,c2;
    int T;
    cin>>T;
    while(T--)
    {
    c1.tnc1();
    c2.tnc1();
    c1.tnc2();
    c2.tnc2();
    cout<< c1.tnc()+ c2.tnc();
    }
    return 0;
}