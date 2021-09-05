#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s;
    cin>>s;
    vector <int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    for (int i = 0 ; i < n; i++)
    {
        int sum =0;
        for (int j = i; j < n; j++)
        {
            sum = sum + v1[j];
            if(sum == s)
            {
                for (int k = i; k <= j ; k++)
                {
                    cout<<v1[k]<<" ";
                }
                cout<<endl;
            }
        }
        
    }
    return 0;
}