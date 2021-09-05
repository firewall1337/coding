#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class Student
{
protected:
    int rollnum;

public:
    void setrollnum(int r)
    {
        rollnum = r;
    }
    void getrollnum()
    {
        cout << "The roll number is " << rollnum << endl;
    }
};

class exam : public Student
{
    protected:
    float phy, maths;

public:
    void setmark(float m1, float m2)
    {
        maths = m1;
        phy = m2;
    }

    void getmark()
    {
        cout << "The marks obtained in physics are " << maths << endl;
        cout << "The marks obtained in maths are " << phy << endl;
    }
};

class Result : public exam
{
    float per;

public:
    void displayres()
    {
        getrollnum();
        getmark();
        cout << "Your percentage is " << (maths + phy) / 2 << endl;
    }
};

int main()
{
    Result abhi;
    abhi.setrollnum(420);
    abhi.setmark(94.5 , 90.1);
    abhi.displayres(); 
    return 0;
}