#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back


int main()
{
    long long  t,a,b,k,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;

            if(k%2==0)
            {
                sum=sum+(a*(k/2));
                sum=sum-(b*(k/2));
            }
           else
            {
                sum=sum-(b*(k/2));
                sum=sum+(a*((k/2)+1));

            }

        cout<<sum<<endl;
        sum=0;
    }

    return 0;

}
