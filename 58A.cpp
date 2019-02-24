#include<bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
   string s1="hello";
   int ln=s.length();
   int c=0;
   for(int i=0;i<ln;i++)
   {
       if(s[i]==s1[c])
       {
           c++;
       }

   }
   if(c==5)
   {
       cout<<"YES"<<endl;
   }else
   cout<<"NO"<<endl;



    return 0;
}
