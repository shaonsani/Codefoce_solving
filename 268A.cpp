#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
#define vec(a)  a.begin(),a.end()
#define pb     push_back

int main()
{  int n,c(0);
   cin>>n;
   int a[n];
   int b[n];

   for(int i=0;i<n;i++)
   {
       cin>>a[i]>>b[i];
   }
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(a[i]==b[j])
           {
               c++;
           }
           if(b[i]==a[j])
           {
               c++;
           }
       }
   }

   cout<<c<<endl;





    return 0;
}
