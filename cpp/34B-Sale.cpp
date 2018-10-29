#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr, arr+n);
  if(m==0)
  {
    cout<<0;
    return 0;
  }
  int sum=0;
  // cout<<"Sorted\n";
  // for(int i=0;i<n;i++)
  // {
  //   cout<<arr[i]<<" ";
  // }
  // cout<<"\n";
  for(int i=0;i<m;i++)
  {
    if(arr[i]<0)
    {
      sum-=arr[i];
    }
    else
    {
      cout<<sum;
      return 0;
    }
  }
  cout<<sum;
  return 0;
}
