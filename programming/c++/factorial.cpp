#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int fact;
    int count = 1;
    cin >> fact;
    if (fact < 0)
    {
        cout << "Error";
    }
    else
    {
        for (int i = 1; i <= fact; i++)
        {
            count = count * i;
        }
        cout << count;
    }
    
    return 0;
}