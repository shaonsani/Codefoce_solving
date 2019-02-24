#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,p,q,a;
   cin>>n;
   cin>>p;
   vector<int> arr;
   for(int i=0;i<p;i++)
   {
       cin>>a;
       arr.push_back(a);
   }
   cin>>q;

   for(int i=0;i<q;i++)
   {
       cin>>a;
       arr.push_back(a);
   }


   int c=0;
   for(int i=1;i<=n;i++)
   {
       if(find(arr.begin(),arr.end(),i) !=arr.end())
       {
           c++;
       }

   }
   if(c==n)
   {
       cout<<"I become the guy."<<endl;
   }
   else
    cout<<"Oh, my keyboard!"<<endl;

   return 0;
}


