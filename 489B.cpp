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
    int n,m,ans=0;
    cin>>n;
    int b[n];
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    sort(b,b+n);
    cin>>m;
    int g[m];
    for(int i=0; i<m; i++)
    {
        cin>>g[i];
    }
    sort(g,g+m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
         if(abs(b[i]-g[j])==1 || b[i]==g[j])
         {ans++;
         g[j]=100001;

         break;}
        }
    }
    cout<<ans<<endl;

    return 0;

}
