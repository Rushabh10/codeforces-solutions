#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    if(x==180)
    {
      cout<<"NO\n";
      return 0;
    }
    int n=360%(180-x);
    if(n==0)
    {
      cout<<"YES\n";
    }
    else
    {
      cout<<"NO\n";
    }
  }
}
