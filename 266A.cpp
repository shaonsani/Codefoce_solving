#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0,i,n;
    cin>>n>>s;



   for(i=0;i<n;i++)
   {
       if(s[i]==s[i+1])
       {
           c++;
       }
   }

   cout<<c;





    return 0;
}
