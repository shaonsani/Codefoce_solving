#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,m,i;
   cin>>n>>m;
   int a[m];
   for(i=0;i<m;i++)
   {
     cin>>a[i];

    }
    sort(a,a+m);
    int mini=a[n-1]-a[0];
    for(i=1;i<=m-n;i++)
    {
      int mini2=a[i+n-1]-a[i];
      if(mini2<mini)
      {
      mini=mini2;
      }


    }
    cout<<mini<<endl;




return 0;

}
