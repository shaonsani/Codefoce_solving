#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef set<int> sett;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back


int main()
{
    ll n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(n>i)
        {
            if(n%i==1)
            {
                n-=i;
            }
        }
        else
        break;

    }
    cout<<n<<endl;
    return 0;

}

