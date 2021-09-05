#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
/*
student - test
student - sports
test - result
sports - result
*/
class student{
    protected :
        int rn;
    public :
        void setnumber(int a)
        {
            rn =a;

        }
        void printnumber()
        {
            cout<<"Your roll number "<<rn<<endl;
        }
};

class test : virtual public student{
    protected  :
        float m,p;
        public:
        void setmarks(float m1,float m2)
        {
             m = m1;
             p = m2;
        }

        void printnumner(){
            cout<<"your result is in maths "<<m<<"in phys: "<<p<<endl;
        }
};

class sports: virtual public student{
    protected :
    float score;
    public:
        void setscore(float sc){
            score =sc;
        }
        void printsocre()
        {
            cout<<"Your score is "<<score<<endl;
        }
};


class result : public test , public sports{
    private:
        float total;
    public :
        void display()
        {
            total = m + p +score;
            printnumber();
            printnumner();
            printsocre();
            cout<<"total score is "<<total<<endl;
        }
};

int main()
{
    result abhi;
    abhi.setnumber(42);
    abhi.setmarks(78.9,99.5);
    abhi.setscore(9);
    abhi.display();
    return 0;
}