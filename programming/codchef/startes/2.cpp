#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , m;
        cin >> n >> m;
        int x , y;
        cin >>x >> y;
        for (int i = 0; i < n; i++)
        {
            int f = 0;
            int p = 0;

            for (int j = 0; j < m; j++)
            {
                char x;
                cin >>x;

                if (x == 'F')
                {
                    f++;
                }
                else if (x == 'P')
                {
                    p++;
                }
            }

            if ((f >=x) || ((f == x -1) && (p>=y) ))
            {
                cout<<"1";
            }
            else{
                cout<<"0";
            }
            
        }
        
    }
    cout<<endl;
    return 0;
}