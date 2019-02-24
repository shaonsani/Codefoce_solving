
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;
    int i,cnt=0;
  for(i=0;i<s.length();i++)
  {
      if(s[i]=='4' || s[i]=='7')
      {
          cnt++;
      }
  }
  if(cnt==4||cnt==7)
  {
      cout<<"YES"<<endl;
  }else
  cout<<"NO"<<endl;

    return 0;
}
