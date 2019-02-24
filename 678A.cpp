#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef set<int> sett;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back
void init()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    init();
    int n,k,gg,ff;
    cin>>n>>k;
    if(n%k!=0)
    {
       gg=n%k;
       n=n+gg;
       if(n%3!=0)
       {
           n=n-(n%3);
           cout<<n<<endl;
       }
       else
        cout<<n<<endl;
    }
    else
        if(k*2<=n)
    {
        cout<<k*3<<endl;
    }



    return 0;

}
