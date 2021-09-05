#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    cout<<"Enter the size of array :";
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        int x;
        cout<<"Enter the "<<i<<" element : ";
        cin >>x;
        v.push_back(x);
    }
    cout<<"The minimum element is "<<*min_element(v.begin() , v.end())<<endl;
    cout<<"The maximum element is "<<*max_element(v.begin() , v.end())<<endl;
    return 0;
}