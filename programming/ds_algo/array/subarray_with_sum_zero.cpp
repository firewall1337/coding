#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum == 0)
            {
                flag++;
                break;
            }
        }
        if (flag == 1) // taki humlog first jo h vo mile
            break;
    }
    if (f == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}