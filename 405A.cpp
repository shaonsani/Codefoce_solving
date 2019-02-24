#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
#define vec(a)  a.begin(),a.end()
#define pb     push_back

int main()
{
   int n,a;
   cin>>n;
   vi arr;
   for(int i=0;i<n;i++)
   {
       cin>>a;
       arr.pb(a);
   }
   sort(vec(arr));
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }


    return 0;
}




