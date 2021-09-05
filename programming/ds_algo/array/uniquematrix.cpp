#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    int right = n - 1, left = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) // if i is even , fill with right
        {
            //for 1s
            arr[i][right] = 1;

            // other than 1
            int x = 2;

            //below i as 2 , 3 , 4 ..
            for (int k = i + 1; k < n; k++)
            {
                arr[k][right] = x++;
            }

            // above i as  + 1 , + 2 , .. n
            for (int k = 0; k < i; k++)
            {
                arr[k][right] = x++;
        
            }
            right--;

        }
        else // Fill next column from left

        {

            //for 1s
            arr[i][left] = 1;

            // other than 1
            int x = 2;


            //below i as 2 , 3 , 4 ..
            for (int k = i + 1; k < n; k++)
            {
                arr[k][left] = x++;
            }


            // above i as  + 1 , + 2 , .. n
            for (int k = 0; k < i; k++)
            {
                arr[k][left] = x++;
            }
            
            left++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}