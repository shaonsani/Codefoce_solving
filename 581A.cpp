#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
#define vec(a)  a.begin(),a.end()
#define pb     push_back

int main()
{
    int a,b,same;
    cin>>a>>b;
    int maxi=min(a,b);
    if(a>=b)
    {
        same=(a-b)/2;
    }
    else
    {
        same=(b-a)/2;
    }
    cout<<maxi<<" "<<same<<endl;

    return 0;
}





