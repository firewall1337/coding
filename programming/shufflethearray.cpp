#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int j = 2*n;
    vector <int> nums(j);
    for (int i = 0; i < j; i++)
    {
        cin>>nums[i];
        nums.push_back(nums[i]);
    }
    vector <int> shuffled; 
    int p = n;
    for (int i = 0; i < n; i++)
    {
        shuffled.push_back(nums[i]);
        shuffled.push_back(nums[p++]);
    }
    for (int i = 0; i < shuffled.size(); i++)
    {
        cout<<shuffled[i];
    }
    return 0;
}