#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back


int main()
{
    int n,a;

    cin>>n;
    double sum=0,sum2=0;

    for(int i=1; i<100; i++)
    {    sum=sqrt(n);
         if((sum-(int)sum)==0)
         {
           cout<<i<<endl;
           cout<<n*i<<endl;
           break;
         }
         else
            sum=n*i;
    }




}



