#include<iostream>
using namespace std;
int main()
{
int t,s=0;
int N,K,min;
cin>>t;
while(t--)
{
  cin>>N>>K;
  int A[N]; 
  for(int i=0;i<N;i++)
  cin>>A[i];
  min=A[0];
  for(int i=1;i<N;i++)
  {
   if(min>A[i])
   min=A[i];
  
  }
  if((K-min)>0)
  cout<<K-min<<endl;
  else
  cout<<s<<endl;
}
return 0;
}
 