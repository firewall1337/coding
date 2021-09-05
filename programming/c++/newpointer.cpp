#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main()
{
    // new keyword
    int *arr = new int[3];
    arr[0] = 1;    
    arr[1] = 2;   // *(arr+1) = 20;  
    arr[2] = 3;
   
    cout<<"The value at arr[0] is "<<arr[0]<<endl;    
    cout<<"The value at arr[1] is "<<arr[1]<<endl;    
    cout<<"The value at arr[2] is "<<arr[2]<<endl;    
    
    
    
    return 0;
}