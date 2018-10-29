#include<bits/stdc++.h>
using namespace std;

bool isLucky(int n)
{
  while(n>0)
  {
    if(n%10==4 || n%10==7)
    {
      n/=10;
    }
    else
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    if(isLucky(i))
    {
      int rem=n%i;
      if(rem==0)
      {
        cout<<"YES";
        return 0;
      }
    }
  }
  cout<<"NO";
  return 0;
}
