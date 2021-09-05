// { Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
   
     public:
   void insertionSort(int arr[], int n)
    {
        // loop for passes
        int key,j;
        for (int i = 1; i <= n-1; i++)
        {
            key = arr[i];
            j = i - 1;
            //loop for each pass
            while(j>=0 && arr[j] > key){
                arr[j+1] = arr[j];
                j--;

            }
            arr[j+1] = key;
        }
    }
};

// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}
  // } Driver Code Ends