#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector <int> v;
    int ele;
    for (int i = 0; i < n; i++)
    {
        cin>>ele;
        v.push_back(ele);
    }
  for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(v[i]>v[j]){
                int temp = v[i];
                v[i] = v[j];
                v[j]= temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i];
    }
    

    
    return 0;
}