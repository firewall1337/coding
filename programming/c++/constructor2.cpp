#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include<cmath>
using namespace std;

class point{
    int x,y;
    public : 
    friend void dist(point , point);
        point(int a, int b)
        {
            x = a;
            y = b;
        }
        void display()
        {
            cout<<"The point is :"<<x<<","<<y<<endl;
        }

      
};
void dist(point p1,point p2)
        {
            float s= p2.x - p1.x;
            float p = p2.y - p1.y;
            float q = sqrt(s*s + p*p);
            cout<<q;
        }


int main()
{

    point p(-7,-4);
    point q(17,6.5);
    p.display();
    q.display();
    dist(p,q);
    return 0;
}