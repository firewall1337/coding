#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int p1=0,p2=0;
    while(t--)
    {
        int r1,r2,w1,w2,c1,c2;
        cin >> r1 >> w1 >>c1;
        cin >> r2 >> w2 >> c2;
        if (r1 > r2 )
        {
            p1++;
        }
        else{
            p2++;
        }
        if(w1 > w2)
        {
            p1++;
        }
        else{
            p2++;
        }
        if (c1 > c2)
        {
            p1++;
        }
        else{
            p2++;
        }

        if (p1 > p2)
        {
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }    
    return 0;
}