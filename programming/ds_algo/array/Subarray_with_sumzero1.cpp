
#include <bits/stdc++.h>
using namespace std;





class Solution{
    public:
   
    bool subArrayExists(int arr[], int n)
    {
        unordered_map<bool , int> m ;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];

            if (sum == 0 || m[sum] == true) // m[sum] matlb khud se comarision.
            {
                return true;
            }
            m[sum] = true;
        }
        return false;

    }
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  