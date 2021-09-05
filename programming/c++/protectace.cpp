#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};
/*
For a protected member:
                          Public derivation  Private Derivation  Protected Derivation
    1.private members     not inherited         not inherited       not inheited 
    2.protected members   protected             private             protected
    3.public members      Public                private             protected

*/
class Derived : Base
{
};

int main()
{

    return 0;
}