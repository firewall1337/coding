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
   
    float min = *min_element(v.begin() , v.end());
    float max = *max_element(v.begin() , v.end());
    float range = max - min;
    float Coefficientofrange = range/(max + min);
    cout<<"Range : "<<range<<endl;
    cout<<"Coefficient of Range : "<<Coefficientofrange<<endl;
    return 0;
}