#include <iostream>
using namespace std;

/*

Syntax for initialization list in constructor:

constructor(argument-list): initilization - section 
{
    assingment + other code;
};

*/

class Test {
    
    int a;
    int b;
    public:
        // Test(int i , int j) : a(i) , b(j)
        // Test(int i , int j) : a(i) , b(j+5)
        // Test(int i , int j) : a(i) , b(a*5)
        // Test(int i , int j) : a(i) , b(a+j)
        // Test(int i , int j) : b(j) , a(i+b)
        // Test(int i , int j) : b(j), a(i+b)
        Test(int i , int j) 
        {
            a = j;
            b = i;
            cout<<"Constructor is executed"<<endl;
            cout<<"Value of a "<<a<<endl;
            cout<<"Value of b "<<b<<endl;
            
        }
};


int main()
{
    Test abhi(7,5);
   
    return 0;
}