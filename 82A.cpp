#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back


int main()
{
    int n;
    cin>>n;
    if(n<=5)
    {

        if(n%5==1)
        {
            cout<<"Sheldon"<<endl;
            return 0;
        }
        if(n%5==2)
        {
            cout<<"Leonard"<<endl;
            return 0;
        }
        if(n%5==3)
        {
            cout<<"Penny"<<endl;
            return 0;
        }
        if(n%5==4)
        {
            cout<<"Rajesh"<<endl;
            return 0;
        }
        if(n%5==0)
        {
            cout<<"Howard"<<endl;
            return 0;
        }


    }
    else
    {
      if(n%5==1 || n%5==2)
   {
    cout<<"Sheldon"<<endl;
     return 0;
   }
    if(n%5==3 || n%5==4 )
   {
    cout<<"Leonard"<<endl;
     return 0;
   }
    if(n%5==0 || n%5==1 )
   {
    cout<<"Penny"<<endl;
     return 0;
   }
   if(n%5==2 || n%5==3 )
   {
    cout<<"Rajesh"<<endl;
     return 0;
   }
   if(n%5==4 || n%5==0 )
   {
    cout<<"Howard"<<endl;
     return 0;
   }



    }




}




