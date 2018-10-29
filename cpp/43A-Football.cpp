#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  string str1, str2;
  int a=0,b=0;
  for(int i=0;i<n;i++)
  {
    string s;
    cin>>s;
    if(i==0)
    {
      str1=s;
      a++;
    }
    else
    {
      if(s!=str1)
      {
        str2=s;
        b++;
      }
      else
      {
        a++;
      }
    }
  }
  if(a>b)
  {
    cout<<str1;
  }
  else
  {
    cout<<str2;
  }
}
