#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class construc{
    int a,b;

    public :
        void printdata(){
            cout<<a<<b;
        }
        construc(int x , int y){
        a = x;
        b =y;
    }

};



int main()
{
    construc c1(3,4); //implicit call
    c1.printdata();
    cout<<"\t";
    
    //explicit call
    construc b = construc(2,3);
    b.printdata(); 
    return 0;
}