#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
#define vec(a)  a.begin(),a.end()
#define pb     push_back

int main()
{
    int n,h,a(0);
    double frn;
    cin>>n>>h;
    for(int i=0; i<n; i++)
    { cin>>frn;
      if(frn>h)
      {
       int b=ceil(frn/h);
       a=a+b;
      }
      else
      a++;
    }
    cout<<a<<endl;

}

