#include<bits/stdc++.h>
#include <sstream>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue< int , vector<int> , greater<int> > minheap;
        for (int i = 0; i < nums.size(); i++)
        {
            minheap.push(nums[i]);
            if (minheap.size()>k){
                minheap.pop();
            }
        }
        
        return minheap.top();

    }
};


 int main()
 {
     Solution p;
     int k;
     cout<<"Enter k : ";
     cin>>k;
     
     int size;
     cin>>size;
     vector <int> n(size);
     int ele;
     for (int i = 0; i < size; i++)
     {
        cin>>ele;
        n.push_back(ele);
     }
     
    
     cout<<p.findKthLargest(n,k);
     
 }
