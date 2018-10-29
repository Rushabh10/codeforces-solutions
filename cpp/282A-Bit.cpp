#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int x=0;
  string str;
  for(int i=0;i<n;i++)
  {
    str="";
    cin>>str;
    if(str[1]=='-')
    {
      --x;
    }
    else
    {
      ++x;
    }
  }
  cout<<x;
}
