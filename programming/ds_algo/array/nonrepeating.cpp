#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstNonRepeating(int arr[], int n)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == n)                   // dhundte dhunte jab j nhi milega matlb ki j ek step aage badh gya h 
                                            // iska matlb us particular element aur kahi nhi h array me.
                                            // toh j ek aage badh gya matlb ki first non repeating element agar vo n ke barabar hua toh
                {
                    cout << arr[i] << endl;
                    return arr[i];
                }
                if (i != j && arr[i] == arr[j]) // i!=j (pehla element khud ke saat compare na kare)
                                                // pehla element compare krega dusre element ke saat. 19 compare hoga aage sabh element se. matlb pehla wala element ko chord ke baki sabh element ke saat comparison hoga.
                                                
                {
                    break;
                }
            }
        }

        return 0;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.firstNonRepeating(arr, n);
    }
}