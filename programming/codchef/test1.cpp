#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio          ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int z = x + y;
        float result;
        if (z < 6)
        {
            result = float(float(6 - z) / float(6));
        }
        else
        {
            result = 0;
        }
        cout << result << "\n";
    }
    return 0;
}