#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , d , h;
        cin>>n>>d>>h;
        int arr[n];
        for (int i = 1; i <=n ; i++)
        {
            cin>>arr[i];
        }
        string ans = "NO";
        int c=0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] > 0)
            {
                c = c + arr[i];
            }
            else{
                if (c < d)
                {
                    c = 0;
                }
                else{
                    c = c - d;
                }
            }
            if (c > h)
            {
                ans = "YES";
                break;
            }
        }
       
        cout<<ans<<endl;
    }

    return 0;
}