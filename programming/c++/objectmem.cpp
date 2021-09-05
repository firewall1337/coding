#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter = 0;

public:
    int setprice();
    int display();
    
};



int shop ::setprice()
{
    cout << "Enter price :";
    cin >> itemprice[counter];
    cout << "Enter item id : ";
    cin >> itemid[counter];
    counter++;
    return 0;
}

int shop ::display()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the item id "<<"is"<<endl<< itemid[i]<<endl  << "the item price is " << itemprice[i];
    }
    return 0;
}

int main()
{
    shop dukan;
    dukan.setprice();
    dukan.setprice();
    dukan.display();
    return 0;
}