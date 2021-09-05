#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int c = 0;
    int x = n / k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    // unordered_map initialization
    unordered_map<int, int> hsh;
  
    for (int i = 1; i <=n ; i++)
    {
        hsh[arr[i]]++;
    }
      /*
    ele1     1
    ele2     1
    ele1     2
    ele4     1

    */
   cout<<"The Elements are : ";
    for (auto i : hsh)
    {
        if(i.second > x)
        {
            c++;
            cout << i.first<< " ";
        }
    }
    cout<<"\nCount of more than n/k Occurences: "<<c;


    return 0;
}