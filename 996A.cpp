#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
#define vec(a)  a.begin(),a.end()
#define pb     push_back

int main()
{
    int n,c(0);
    cin>>n;
    while(n>0)
    {
        if(n>=100)
        {
            n=n-100;
            c++;
            continue;
        }

         if(n>=20)
        {
            n=n-20;
            c++;
            continue;
        }
        if(n>=10)
        {
            n=n-10;
            c++;
            continue;
        }
        if(n>=5)
        {
            n=n-5;
            c++;
            continue;
        }
        if(n>=1)
        {
            n=n-1;
            c++;
            continue;
        }
    }
    cout<<c<<endl;
    return 0;
}


