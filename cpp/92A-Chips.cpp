#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  int round1=(n*(n+1))/2;
  int rem=0;
  if(round1<m)
  {
    rem=m%round1;
  }
  else
  {
    rem=m;
  }
  // cout<<"rem: "<<rem<<"\n";
  for(int i=1;i<=n;i++)
  {
    int sum=(i*(i+1))/2;
    // cout<<"sum: "<<sum<<"\n";
    if(rem==sum)
    {
      cout<<0;
      return 0;
    }
    else if(sum>rem)
    {
      int x=((i-1)*(i))/2;
      cout<<rem-x;
      return 0;
    }
  }
}
