#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class comples
{
    int a, b;

public:
    comples()
    {
        a = 0;
        b = 0;
    }
    comples(int x, int y)
    {
        a = x;
        b = y;
    }

    comples(int x)
    {
        a = x;
        b = 0;
    }
    void printnumber()
    {
        cout << a << b;
    }
};

int main()
{
    comples c1(1);
    c1.printnumber();

    return 0;
}