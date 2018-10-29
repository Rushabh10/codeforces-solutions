#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  cin>>str;
  string out="";
  for(int i=0;i<str.length();i++)
  {
    if(str[i]=='A' || str[i]=='O' || str[i]=='Y' || str[i]=='E' || str[i]=='U' || str[i]=='I' || str[i]=='a' || str[i]=='o' || str[i]=='y' || str[i]=='e' || str[i]=='u' || str[i]=='i')
    {
      out+="";
    }
    else
    {
      out+=".";
      if(str[i]>=97)
      out+=str[i];
      else
      {
        out+=(str[i]+32);
      }
    }
  }
  cout<<out;
}
