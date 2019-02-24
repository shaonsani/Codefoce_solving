#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i;
  int x=0;
  string s;
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>s;
      if(s[0]=='+'||s[1]=='+')
      {
          ++x;
      }
      else

          --x;

  }
  cout<<x;


    return 0;
}
