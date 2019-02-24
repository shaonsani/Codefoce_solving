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
    int n,s,a,c=0;
    cin>>n>>s;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        if(a>=s)
        c++;
    }
    if(c>0)
    cout<<c<<endl;
    else
    cout<<"-1"<<endl;









return 0;

}


