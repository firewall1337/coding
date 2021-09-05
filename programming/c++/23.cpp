#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class binary
{
    string s;
     

public:
    int read();
   int ch();
    int ones();
    int display();
};

int binary ::read()
{
    cout << "Enter a binary number:";
    cin >> s;

    return 0;
}

int binary ::ch(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Not binary";
            exit(0);
        }
    }
    return 0;
}

int binary ::ones()
{
    ch(); // implementing private function to public function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
    }
    return 0;
}

int binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    return 0;
}

int main()
{
    binary a;
    a.read();
    a.ch();
    a.ones();
    a.display();
    return 0;
}