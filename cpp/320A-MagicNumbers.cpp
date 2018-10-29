#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int n2=n;
  int q=n/10, rem=n%10;
  int cnt=0;
  // while(n2>0)
  // {
  //   q=n2/10;
  //   rem=n2%10;
  //   if(cnt==0)
  //   {
  //     if(rem==4)
  //     {
  //       cnt++;
  //       continue;
  //     }
  //     else if(rem==1)
  //     {
  //       cnt=0;
  //       continue;
  //     }
  //     else
  //     {
  //       cout<<"NO";
  //       return 0;
  //     }
  //   }
  //   else if(cnt==1)
  //   {
  //     if(rem==4)
  //     {
  //       cnt++;
  //       continue;
  //     }
  //     else if(rem==1)
  //     {
  //       cnt=0;
  //       continue;
  //     }
  //     else
  //     {
  //       cout<<"NO";
  //       return 0;
  //     }
  //   }
  //   else if(cnt==2)
  //   {
  //     if(rem==1)
  //     {
  //       cnt=0;
  //       continue;
  //     }
  //     else
  //     {
  //       cout<<"NO";
  //       return 0;
  //     }
  //   }
  //   n2=q;
  // }
  // cout<<"YES";
  while(n2>0)
  {
    int rem1, rem2, rem3;
    rem1=n2%10;
    rem2=n2%100;
    rem3=n2%1000;
    if(rem3==144)
    {
      n2/=1000;
      continue;
    }
    else if(rem2==14)
    {
      n2/=100;
      continue;
    }
    else if(rem1==1)
    {
      n2/=10;
      continue;
    }
    else
    {
      cout<<"NO";
      return 0;
    }
  }
  cout<<"YES";
  return 0;
}
